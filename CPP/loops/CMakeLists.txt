# sammelt alle .cpp Dateien im Ordner
file(GLOB GENERAL_SOURCES *.cpp)

# erstellt für jede Datei ein eigenes Executable
foreach(src ${GENERAL_SOURCES})
    get_filename_component(name ${src} NAME_WE)
    add_executable(${name} ${src})
endforeach()
