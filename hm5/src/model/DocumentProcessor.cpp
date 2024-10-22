#include "DocumentProcessor.hpp"


std::unique_ptr<char[]> DocumentProcessor::importContent(const std::string& fullFilename) const
{
    std::cout<<"Import content from file " << fullFilename << std::endl;
    std::unique_ptr<char[]> content(new char[100]);
    std::__memcmp(content.get(), "content", 9);

    return std::move(content);
}

std::shared_ptr<Document> DocumentProcessor::createDocument(const std::string& fullFilename)
{
    std::cout<<"Document with name " << fullFilename << " was created"<<std::endl;
    return std::make_shared<Document>(Document(fullFilename));
}

std::shared_ptr<Document> DocumentProcessor::importDocument(const std::string& fullFilename)
{
    std::cout<<"Document with name " << fullFilename << " was imported"<<std::endl;
    auto content = importContent(fullFilename);
    return std::make_shared<Document>(Document(fullFilename, std::move(content)));
}


bool DocumentProcessor::exportDocument(std::shared_ptr<Document> doc, const std::string& outFilePath) 
{
    std::cout<<"Document with name " << doc->fullFilename() 
        << " was exported to "<< outFilePath <<std::endl;
    return true;
}