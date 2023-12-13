#include <iostream>
#include <cstring>
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
};

struct Estudiante copiarEstudiante(struct Estudiante estudiante) {
    struct Estudiante nuevoEstudiante;
    strcpy(nuevoEstudiante.nombre, estudiante.nombre);
    nuevoEstudiante.edad = estudiante.edad;
    nuevoEstudiante.nota = estudiante.nota;
    return nuevoEstudiante;
}














int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";
    return 0;
}
