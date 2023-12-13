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
void verListaEstudiantes(struct ListaEstudiantes *lista) {
    if (lista->numEstudiantes > 0) {
        printf("\nLista de Estudiantes:\n");
        for (int i = 0; i < lista->numEstudiantes; i++) {
            printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", lista->estudiantes[i].nombre, lista->estudiantes[i].edad, lista->estudiantes[i].promedio);
        }
    } else {
        printf("La lista de estudiantes está vacía.\n");
    }
}
void liberarLista(struct ListaEstudiantes *lista) {
    free(lista->estudiantes);
    lista->numEstudiantes = 0;
}



int main()
{
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
