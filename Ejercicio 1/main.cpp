#include <iostream>
#include <cstdio>

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};
void mostrarEstudiante(struct Estudiante *estudiante) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);
}
void agregarEstudiante(struct Estudiante *lista, int *numEstudiantes) {
    if (*numEstudiantes < 10) {
        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", lista[*numEstudiantes].nombre);
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &lista[*numEstudiantes].edad);
        printf("Ingrese el promedio del estudiante: ");
        scanf("%f", &lista[*numEstudiantes].promedio);

        (*numEstudiantes)++;
        printf("Estudiante agregado correctamente.\n");
    } else {
        printf("La lista de estudiantes está llena. No se pueden agregar más estudiantes.\n");
    }
}
void verListaEstudiantes(struct Estudiante *lista, int numEstudiantes) {
    if (numEstudiantes > 0) {
        printf("\nLista de Estudiantes:\n");
        for (int i = 0; i < numEstudiantes; i++) {
            mostrarEstudiante(&lista[i]);
        }
    } else {
        printf("La lista de estudiantes está vacía.\n");
    }
}

void eliminarEstudiante(struct Estudiante *lista, int *numEstudiantes) {
    if (*numEstudiantes > 0) {
        verListaEstudiantes(lista, *numEstudiantes);
    int indiceEliminar;
    printf("Ingrese el número de estudiante a eliminar (1-%d): ", *numEstudiantes);
    scanf("%d", &indiceEliminar);

        if (indiceEliminar >= 1 && indiceEliminar <= *numEstudiantes) {
            // Elimina al estudiante desplazando los elementos restantes en la lista
            for (int i = indiceEliminar - 1; i < *numEstudiantes - 1; i++) {
                lista[i] = lista[i + 1];
            }
            // Decrementa el contador de estudiantes en la lista
            (*numEstudiantes)--;
            printf("Estudiante eliminado correctamente.\n");
        } else {
            printf("Índice inválido. No se eliminó ningún estudiante.\n");
        }
    } else {
        printf("La lista de estudiantes está vacía. No se puede eliminar ningún estudiante.\n");
    }
}

int main() {

return 0;
}