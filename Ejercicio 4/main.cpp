#include <string>
#include <cstring>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
typedef struct Estudiante Estudiante;



int main()
{
    Estudiante estudiante3;

    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    // Mostrar la información del estudiante utilizando el alias
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3.nombre, estudiante3.edad, estudiante3.promedio);



    return 0;
}
