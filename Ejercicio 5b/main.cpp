#include<iostream>
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
};
void imprimirEstudiantePorReferencia(struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->nota);
}
int main()
{
    struct Estudiante estudiante1 = {"Ruben", 20, 9.5};
    imprimirEstudiantePorReferencia(&estudiante1);
    return 0;
}