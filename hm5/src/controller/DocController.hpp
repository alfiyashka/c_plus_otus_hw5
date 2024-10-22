#ifndef _DOC_CONTROLLER_HPP
#define _DOC_CONTROLLER_HPP


#include "IController.hpp"
#include <unordered_map>
#include <memory>
#include "../model/Document.hpp"
#include "../model/DocumentProcessor.hpp"

using docMap_t = std::unordered_map<std::string, std::shared_ptr<Document> >;

/**
 * /brief implements a controller that controls with Document
 */
class DocController: public IController
{
private:
    inline static std::string DEFAULT_PATH{"default_path"}; // define default path
    
    docMap_t m_docs; // map of documents

    DocumentProcessor m_docProcessor; // manipulates by appropriate document

    /**
     * generates correct file name 
     * @param fullfFilename input file name
     * @return fullfFilename, if it is not empty, else default filename
     */
    std::string generateFileName(const std::string& fullFilename) const;
public:
    /**
     * constructor
     */
    DocController(){ }
    /**
     * destructor
     */
    virtual ~DocController() override {}

    /**
     * creates a document 
     * @param fullfFilename input file name
     * @return true, if document was created successfully, else false
     */
    virtual bool createDocument(const std::string& fullFilename) override;

    /**
     * imports a document 
     * @param fullfFilename input file name
     * @return true, if document was imported successfully, else false
     */
    virtual bool importDocument(const std::string& fullFilename) override;

    /**
     * exports a document 
     * @param documentFilename file name of a document
     * @param outFilename output file path to export
     * @return true, if document was exported successfully, else false
     */
    virtual bool exportDocument(const std::string& documentFilename, const std::string& outFilePath) override;

};


#endif