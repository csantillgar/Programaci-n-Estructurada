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




int main() {

return 0;
}