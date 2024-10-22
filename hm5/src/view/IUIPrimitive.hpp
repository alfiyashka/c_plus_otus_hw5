#ifndef _IUIPRIMITIVE_HPP__
#define _IUIPRIMITIVE_HPP__

/**
 * interface of ui 
 */
class IUIPrimitive
{
private:
public:
   IUIPrimitive() {}
   virtual ~IUIPrimitive() {}
   
   /**
    * builds ui window
    */
   virtual bool buildUIWindow() = 0;

    /**
    * destroy ui window
    */
   virtual bool destroyUIWindow() = 0; 

   /**
    * push to create document button
    */
   virtual bool pushCreateDocumentButton() = 0;

   /**
    * push to import document button
    */
   virtual bool pushImportDocumentButton() = 0;

   /**
    * push to export document button
    */
   virtual bool pushExportDocumentButton() = 0;

};

#endif