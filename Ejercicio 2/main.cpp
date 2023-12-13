#include<iostream>
#include<cstring>


union Dato {
    int i;
    float f;
    char str[20];
};
int main()
{
    union Dato dato;
    dato.i = 10;
    printf("dato.i = %d\n", dato.i);
    dato.f = 220.5;
    printf("dato.f = %f\n", dato.f);
    strcpy(dato.str, "C++ Programming");
    printf("dato.str = %s\n", dato.str);


    return 0;
}
