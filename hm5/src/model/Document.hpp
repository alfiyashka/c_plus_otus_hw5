#ifndef _DOCUMENT_HPP
#define _DOCUMENT_HPP

#include <string>

#include <memory>

/**
 * /brief implements Document
 */
class Document
{
private:
   const std::string m_fullFilename; // full file path
   std::shared_ptr<char[]> m_content; // content of a documnet
   
public:
   /**
    * constructor
    * @param fullFilename full file path name
    */
   Document(const std::string& fullFilename): m_fullFilename(fullFilename) {}

   /**
    * constructor
    * @param fullFilename full file path name
    * @param content a content
    */
   Document(const std::string& fullFilename, std::shared_ptr<char[]> content)
     : m_fullFilename(fullFilename),
       m_content(content) {}
  /**
    * copy constructor
    */     
   Document(const Document& doc)
     : m_fullFilename(doc.m_fullFilename),
       m_content(doc.m_content) {}

   /**
    * move constructor
    */     
   Document(const Document&& doc)
     : m_fullFilename(doc.m_fullFilename),
       m_content(doc.m_content) {}      
   ~Document() {}

   /**
    * getter of full path name of document 
    * @return full path name of document 
    */ 
   const std::string& fullFilename() const { return m_fullFilename; }
};

#endif