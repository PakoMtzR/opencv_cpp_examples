#include <iostream>
#include <opencv2/opencv.hpp>
#include <direct.h>
#include <cstring> // Para std::strlen y std::strrchr
#include <string>  // Para std::string y std::getline
#include <sstream> // Para std::stringstream

int main() {
    const size_t size = 1024; 
    char currentPath[size]; 

    if(_getcwd(currentPath, size) == NULL) {
        std::cerr << "Error obteniendo el directorio actual." << std::endl;
        return -1;
    }
    
    std::cout << "Directorio actual: " << currentPath << std::endl;

    // Retroceder dos carpetas
    char* lastSlash = std::strrchr(currentPath, '\\'); // Encuentra la última barra invertida
    if (lastSlash) {
        *lastSlash = '\0'; // Elimina la última carpeta
        lastSlash = std::strrchr(currentPath, '\\'); // Encuentra la nueva última barra invertida
        if (lastSlash) {
            *lastSlash = '\0'; // Elimina la segunda última carpeta
        }
    }

    std::cout << "Nuevo Directorio: " << currentPath << std::endl;

    // Crear una nueva ruta para acceder a otra carpeta
    std::string imagePath = std::string(currentPath) + "\\images\\gato.jpg";

    // Muestra version de opencv
    std::cout << "Version OpenCV: "<< CV_VERSION << std::endl;

    // cv::Mat image = cv::imread("D:/Programming/cpp_projects/program_opencv_example/images/gato.jpg"); // Ruta a la imagen
     cv::Mat image = cv::imread(imagePath.c_str()); // Lee la imagen desde la nueva ruta
    if (image.empty()) {
        std::cout << "No se pudo abrir o encontrar la imagen!" << std::endl;
        return -1;
    }

    cv::imshow("Display window", image);
    cv::waitKey(0); // Espera hasta que se presione una tecla
    return 0;
}