cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(program_opencv_example)

# Especifica el directorio de OpenCV
# Asegúrate de que este sea el directorio que contiene OpenCVConfig.cmake
set(OpenCV_DIR "D:/opencv_lib/opencv/build/")

# Encuentra OpenCV
find_package(OpenCV REQUIRED)

# Verifica si OpenCV fue encontrado
if (NOT OpenCV_FOUND)
    message(FATAL_ERROR "No se pudo encontrar OpenCV. Asegúrate de que OpenCV esté instalado correctamente y de que OpenCV_DIR apunte al directorio correcto.")
endif()

# Agregar el ejecutable (modifica según la ubicación de main.cpp)
add_executable(${PROJECT_NAME} main.cpp)

# Especifica las rutas de los archivos de encabezado de OpenCV
include_directories(${OpenCV_INCLUDE_DIRS})

# Enlaza las bibliotecas de OpenCV
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

# Configurar el directorio de salida del ejecutable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)