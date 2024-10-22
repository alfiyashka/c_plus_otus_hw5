#ifndef _DOCEDITOR_HPP
#define _DOCEDITOR_HPP

#include "IEditor.hpp"
#include <memory>

#include "../controller/IController.hpp"
#include "IUIPrimitive.hpp"

class DocEditor: public IEditor
{
private:
    std::shared_ptr<IUIPrimitive> m_ui; // ui premitive
    std::shared_ptr<IController> m_controller; // a controller
     
public:

   DocEditor(std::shared_ptr<IController> controller, std::shared_ptr<IUIPrimitive> ui): m_controller(controller), m_ui(ui) {}
   virtual ~DocEditor() override {}

   /**
    * creates gui primitive
    */
    virtual void create() override;

    /**
    * destroys gui primitive
    */
    virtual void destroy() override;
    
    /**
    * click create document button
    * @param fullFileName - full file path name
    */
    virtual void clickCreateDocument(const std::string& fullFileName = "") override;

    /**
    * /brief click import document button
    * @param fullFileName - full file path name
    */
    virtual void clickImportDocument(const std::string& fullFileName) override;

    /**
    * /brief click export document button
    * @param docFileName - document's full file path name
    * @param outputFilePath - output file path
    */
    virtual void clickExportDocument(const std::string& docFilename, const std::string& outputFilePath) override;

};

#endif