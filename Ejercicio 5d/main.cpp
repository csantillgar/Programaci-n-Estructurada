#include <iostream>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
struct ListaEstudiantes {
    struct Estudiante *estudiantes;
    int numEstudiantes;
};





int main()
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
