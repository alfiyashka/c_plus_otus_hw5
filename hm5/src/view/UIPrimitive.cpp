#include "UIPrimitive.hpp"

bool UIPrimitive::buildUIWindow()
{
    std::cout<<"Build ui, resources"<< std::endl;
    return true;
}

bool UIPrimitive::destroyUIWindow()
{
    std::cout<<"Clean ui resources"<< std::endl;
    return true;
} 

bool UIPrimitive::pushCreateDocumentButton()
{
    std::cout<<"Push create document button"<< std::endl;
    return true;
}

bool UIPrimitive::pushImportDocumentButton()
{
    std::cout<<"Push import document button"<< std::endl;
    return true;
}

bool UIPrimitive::pushExportDocumentButton()
{
    std::cout<<"Push export document button"<< std::endl;
    return true;
}