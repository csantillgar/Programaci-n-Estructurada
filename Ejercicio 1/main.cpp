#include <iostream>
using namespace std;
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
        for (int i = 0; i < numEstudiantes; i++) {
            mostrarEstudiante(&lista[i]);
        }
    }
}


int main() {

return 0;
}