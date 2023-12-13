#include<iostream>
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
};
void imprimirEstudiantePorValor(struct Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}
int main()
{
    std::cout << "Hello World!" << std::endl;
    return 0;
}
