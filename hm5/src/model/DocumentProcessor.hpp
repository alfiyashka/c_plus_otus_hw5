#ifndef _DOCUMENT_PROCESSOR_HPP__
#define _DOCUMENT_PROCESSOR_HPP__

#include <iostream>
#include <memory>
#include "Document.hpp"

/**
 * /brief helps to manipulate with Document
 */
class DocumentProcessor
{
private:
   /**
    * imports a content from filepath
    * @param fullFilename  full file path from that a content will be loaded
    * @return a content from filepath
    */
   std::unique_ptr<char[]> importContent(const std::string& fullFilename) const;
   
public:

   /**
    * creates a document with appropriate path
    * @param fullFilename  full file path in that a document's content will be stored
    * @return a new document header
    */
   std::shared_ptr<Document> createDocument(const std::string& fullFilename);

   /**
    * imports a document from appropriate path
    * @param fullFilename  full file path from that a document will be loaded
    * @return a new imported document header
    */
   std::shared_ptr<Document> importDocument(const std::string& fullFilename);

   /**
    * exports a document to the appropriate path
    * @param doc a document header 
    * @param outFilePath  full file path in that a document will be stored
    * @return true, if document was exported successfully, or false, otherwise
    */
   bool exportDocument(std::shared_ptr<Document> doc, const std::string& outFilePath);


};

#endif