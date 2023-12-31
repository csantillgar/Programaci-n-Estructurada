#include <string>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
struct ListaEstudiantes {
    struct Estudiante *estudiantes;
    int numEstudiantes;
};
void inicializarLista(struct ListaEstudiantes *lista, int capacidad) {
    lista->estudiantes = (struct Estudiante *) malloc(capacidad * sizeof(
    struct Estudiante));
    lista->numEstudiantes = 0;
}
void agregarEstudiante(struct ListaEstudiantes *lista, struct Estudiante est){
    if (lista->numEstudiantes < 10) {
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
    struct ListaEstudiantes lista{};
    inicializarLista(&lista, 10);

    // Crear instancias de la estructura Estudiante y agregar a la lista
    struct Estudiante estudiante1 = {"Juan", 20, 9.5};
    agregarEstudiante(&lista, estudiante1);

    struct Estudiante estudiante2 = {"Ana", 22, 9.8};
    agregarEstudiante(&lista, estudiante2);

    // Mostrar la lista de estudiantes
    verListaEstudiantes(&lista);

    // Liberar la memoria de la lista
    liberarLista(&lista);
    return 0;
}
