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
void inicializarlista(struct ListaEstudiantes *lista, int capacidad) {
    lista->estudiantes = (struct Estudiante *) malloc(capacidad * siceof(
    struct Estudiante));
    lista->numEstudiantes = 0;
}





int main()
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
