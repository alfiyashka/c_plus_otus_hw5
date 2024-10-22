cmake_minimum_required(VERSION 3.28.3)



set(PATCH_VERSION "1" CACHE INTERNAL "PATCH_VERSION" )
set(PROJECT_VERSION 0.0.${PATCH_VERSION})


project(hw5 VERSION ${PROJECT_VERSION} LANGUAGES C CXX)


configure_file(version.h.in version.h)

include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

set ( CONTROLLER
   src/controller/IController.hpp
   src/controller/DocController.hpp
)
set ( CONTROLLER_SRC
   src/controller/DocController.cpp
)

set ( VIEW
   src/view/IEditor.hpp
   src/view/DocEditor.hpp
   src/view/IUIPrimitive.hpp
   src/view/UIPrimitive.hpp
)

set ( VIEW_SRC
   src/view/DocEditor.cpp
   src/view/UIPrimitive.cpp
)

set ( MODEL
   src/model/Document.hpp
   src/model/DocumentProcessor.hpp
)

set ( MODEL_SRC
   src/model/DocumentProcessor.cpp
)


add_executable(hw5 ${CONTROLLER} ${CONTROLLER_SRC} ${VIEW} ${VIEW_SRC} ${MODEL} ${MODEL_SRC} main.cpp)

set_property(TARGET hw5 PROPERTY CXX_STANDARD 17)


include("functions.cmake")
generate_packages(${PROJECT_NAME})

