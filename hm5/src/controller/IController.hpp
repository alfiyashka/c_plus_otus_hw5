#ifndef _I_CONTROLLER_HPP
#define _I_CONTROLLER_HPP

#include <string>

/**
 * a controller interface
 */
class IController
{
private:
public:
    virtual ~IController() {}

    /**
    * /brief creates document
    * @param fullFilename - full file path
    * @return true if document is created successfully, false otherwise
    */
    virtual bool createDocument(const std::string& fullFilename) = 0;

    /**
    * /brief imports document
    * @param fullFilename - full file path
    * @return true if document is imported successfully, false otherwise
    */
    virtual bool importDocument(const std::string& fullFilename) = 0;    

    /**
    * /brief exports document
    * @param documentFilename - document filename 
    * @param outFilePath - full output file path
    * @return true if document is exported successfully, false otherwise
    */
    virtual bool exportDocument(const std::string& documentFilename, const std::string& outFilePath) = 0;
};





#endif 