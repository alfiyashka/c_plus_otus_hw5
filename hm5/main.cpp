#include <iostream>
#include "src/view/IEditor.hpp"
#include "src/view/DocEditor.hpp"
#include "src/controller/DocController.hpp"
#include "src/view/IUIPrimitive.hpp"
#include "src/view/UIPrimitive.hpp"

using namespace std;

/**
 * @mainpage Simple Document Editor Prototype
 */



int main()
{
  std::unique_ptr<IEditor> editor(new DocEditor(
      std::shared_ptr<IController>(new DocController()),
      std::shared_ptr<IUIPrimitive>(new UIPrimitive())
        ) 
      );

  editor->create();
  
  editor->clickCreateDocument();

  editor->clickCreateDocument("MyPath/MyDoc");

  editor->clickImportDocument("fromMyPath");

  editor->clickExportDocument("MyPath/MyDoc", "exportPath/");

  editor->destroy();

  return 0;
}
