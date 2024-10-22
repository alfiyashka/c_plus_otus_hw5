#include "DocController.hpp"

std::string DocController::generateFileName(const std::string& fullFilename) const
{
    if (fullFilename.empty())
    {
        return DEFAULT_PATH + "Doc_" + std::to_string(this->m_docs.size());
    }
    return fullFilename;
}

bool DocController::createDocument(const std::string& fullFilename)
{
    auto newDoc = m_docProcessor.createDocument(generateFileName(fullFilename));
    if (!newDoc.get())
    {
        return false;
    }
    m_docs.insert(docMap_t::value_type(fullFilename, newDoc));
    return true;
}

bool DocController::importDocument(const std::string& fullFilename)
{
    if (fullFilename.empty())
    {
        return false;
    }
    auto newDoc = m_docProcessor.importDocument(fullFilename);
    if (!newDoc.get())
    {
        return false;
    }
    m_docs.insert(docMap_t::value_type(fullFilename, newDoc));
    return true;
}

bool DocController::exportDocument(const std::string& documentFilename, const std::string& outFilePath)
{
    if (outFilePath.empty())
    {
        return false;
    }
    auto doc = m_docs.find(documentFilename);
    if (doc == m_docs.end())
    {
        return false;
    }
    return m_docProcessor.exportDocument(doc->second, outFilePath);
}

