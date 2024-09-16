# Instrucciones para Ejecutar el Programa de Ejemplo con OpenCV

Este documento proporciona instrucciones para configurar y ejecutar el programa de ejemplo que utiliza OpenCV en un entorno Windows. A continuación se detalla el proceso de instalación de CMake y OpenCV, así como la configuración del proyecto y la ejecución del programa.

## Prerrequisitos

1. **Sistema Operativo**: Windows (las instrucciones están adaptadas para este sistema).

2. **Herramientas Necesarias**:
   - CMake
   - OpenCV
   - Un compilador compatible (por ejemplo, Visual Studio)

## Instalación de CMake

1. **Descargar CMake**:
   - Visita la [página de descargas de CMake](https://cmake.org/download/).
   - Descarga el instalador de Windows (por ejemplo, `cmake-<version>-win64-x64.msi`).

2. **Instalar CMake**:
   - Ejecuta el archivo descargado.
   - Sigue las instrucciones del asistente de instalación.
   - Asegúrate de seleccionar la opción para añadir CMake al PATH durante la instalación.

## Instalación de OpenCV

1. **Descargar OpenCV**:
   - Visita la [página de descargas de OpenCV](https://opencv.org/releases/).
   - Descarga el archivo ZIP correspondiente para Windows (por ejemplo, `opencv-<version>-vc14_vc15.exe`).

2. **Instalar OpenCV**:
   - Extrae el archivo ZIP descargado a una ubicación de tu elección (por ejemplo, `D:/opencv_lib/opencv`).

## Configuración del Proyecto

1. **Estructura del Proyecto**:
   - Crea una carpeta para tu proyecto (por ejemplo, `program_opencv_example`).
   - Dentro de esta carpeta, crea los siguientes archivos y carpetas:
     - `CMakeLists.txt`
     - `main.cpp`
     - `images/` (coloca una imagen llamada `gato.jpg` dentro de esta carpeta)

