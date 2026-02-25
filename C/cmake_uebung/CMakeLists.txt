cmake_minimum_required(VERSION 3.15) # Version

project(cmake_uebung C) # project name, Sprache

set(CMAKE_C_STANDARD 11) # -std=c11

add_executable(sensor_app # executable name und source files
    src/main.c
    src/sensor.c
    src/processing.c
)

target_include_directories(sensor_app PRIVATE include) # suche nach includes im ordner include 
