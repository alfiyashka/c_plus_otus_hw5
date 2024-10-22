#include "DocEditor.hpp"

#include <stdexcept>
#include <iostream>

void DocEditor::create()
{
    if (!m_ui->buildUIWindow())
    {
        throw std::runtime_error("Error in ui initialization!");
    }
}

void DocEditor::destroy()
{
    if (!m_ui->destroyUIWindow())
    {
        throw std::runtime_error("Cannot release UI resources");
    }
}
    
void DocEditor::clickCreateDocument(const std::string& fullFileName /*= ""*/)
{
    if (m_ui->pushCreateDocumentButton())
    {
        if (!m_controller->createDocument(fullFileName))
        {
            std::cerr<< "Cannot create document"<<std::endl;
        }
    }
}

void DocEditor::clickImportDocument(const std::string& fullFileName)
{
    if (m_ui->pushImportDocumentButton())
    {
        if (!m_controller->importDocument(fullFileName))
        {
            std::cerr<< "Cannot create document"<<std::endl;
        }
    }
}

void DocEditor::clickExportDocument(const std::string& docFilename, const std::string& outputFilePath)
{
    if (m_ui->pushExportDocumentButton())
    {
        if (!m_controller->exportDocument(docFilename, outputFilePath))
        {
            std::cerr<< "Cannot export document"<<std::endl;
        }   
    }
}