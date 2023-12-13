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
void agregarEstudiante(struct ListaEstudiantes *lista, struct Estudiante est){
    if (lista->munEstudiantes <10) {
        lista->estudiantes[lista->numEstudiantes] = est;
        (lista->numEstudiantes)++;
        printf("Estudiante agregado con exito\n");
    } else {
        printf("No se puede agregar, lista llena\n");
    }
}




int main()
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
