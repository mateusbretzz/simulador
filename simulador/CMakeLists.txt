cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Collect all source files from different directories
file(GLOB CORE_SOURCES "core-simulador-cpp/*.cpp")
file(GLOB PERSONAGENS_SOURCES "personagens-cpp/*.cpp")
file(GLOB ACESSORIOS_SOURCES "acessorios-cpp/*.cpp")

# Combine all source files into a single list
set(SOURCES
    ${CORE_SOURCES}
    ${PERSONAGENS_SOURCES}
    ${ACESSORIOS_SOURCES}
    principal/main.cpp
)

# Include header files
include_directories(core-simulador-hpp personagens-hpp acessorios-hpp)

# Create an executable
add_executable(my_program ${SOURCES})