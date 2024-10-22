#ifndef _IEDITOR_HPP
#define _IEDITOR_HPP

/**
* /brief class IEditor implements GUI interface functions 
*/

#include <string>

class IEditor
{
private:
public:
    IEditor() {}
    virtual ~IEditor() {}

    /**
    * /brief creates gui primitive
    */
    virtual void create() = 0;

    /**
    * /brief destroys gui primitive
    */
    virtual void destroy() = 0;

    /**
    * /brief click create document button
    * @param fullFileName - full file path name
    */
    virtual void clickCreateDocument(const std::string& fullFileName = "") = 0;

    /**
    * /brief click import document button
    * @param fullFileName - full file path name
    */
    virtual void clickImportDocument(const std::string& fullFileName) = 0;    

    /**
    * /brief click export document button
    * @param docFileName - document's full file path name
    * @param outputFilePath - output file path
    */
    virtual void clickExportDocument(const std::string& docFileName, const std::string& outputFilePath) = 0;
};




#endif