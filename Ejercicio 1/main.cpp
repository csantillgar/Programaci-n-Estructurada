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
    // Verifica si hay espacio en la lista (por ejemplo, un límite de 10 estudiantes)
    if (*numEstudiantes < 10) {
        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", lista[*numEstudiantes].nombre);
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &lista[*numEstudiantes].edad);
        printf("Ingrese el promedio del estudiante: ");
        scanf("%f", &lista[*numEstudiantes].promedio);

        // Incrementa el contador de estudiantes en la lista
        (*numEstudiantes)++;
        printf("Estudiante agregado correctamente.\n");
    } else {
        printf("La lista de estudiantes está llena. No se pueden agregar más estudiantes.\n");
    }
}



int main() {

return 0;
}