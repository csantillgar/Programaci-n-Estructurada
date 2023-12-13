#include <iostream>
#include <cstring>
struct Estudiante {
    char nombre[50];
    int edad;
    float nota;
};

struct Estudiante copiarEstudiante(struct Estudiante estudiante) {
    struct Estudiante nuevoEstudiante;
    strcpy(nuevoEstudiante.nombre, estudiante.nombre);
    nuevoEstudiante.edad = estudiante.edad;
    nuevoEstudiante.nota = estudiante.nota;
    return nuevoEstudiante;
}

int main()
{
 struct Estudiante estudianteOriginal={"Rubén", 20, 9.5};
 struct Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

 printf("Estudiante original:\n");
 printf("Nombre: %s, Edad: %d, Nota: %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.nota);
    printf("Estudiante copia:\n");
    printf("Nombre: %s, Edad: %d, Nota: %.2f\n", estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.nota);

 return 0;
}
