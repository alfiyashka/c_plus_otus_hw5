#ifndef __UI_PRIMITIVE_HPP__
#define __UI_PRIMITIVE_HPP__

#include <iostream>

#include "IUIPrimitive.hpp"

/**
 * implements ui @ref IUIPrimitive
 */
class UIPrimitive: public IUIPrimitive
{
    
public:
    UIPrimitive() 
    {
        std::cout<<"Create ui"<< std::endl;
    }
    ~UIPrimitive() 
    {
        std::cout<<"Destroy ui"<< std::endl;
    }

   /**
    * builds ui window
    * @return true if ui window was built successfully, else false
    */
   virtual bool buildUIWindow() override;

    /**
    * destroy ui window
    * @return true if ui window was destroyed successfully, else false
    */
   virtual bool destroyUIWindow() override;

   /**
    * push to create document button
    * @return true pushed to create document button successfully, else false
    */
   virtual bool pushCreateDocumentButton() override;

   /**
    * push to import document button
    * @return true pushed to import document button successfully, else false
    */
   virtual bool pushImportDocumentButton() override;

   /**
    * push to export document button
    * @return true pushed to export document button successfully, else false
    */
   virtual bool pushExportDocumentButton() override;
};

#endif