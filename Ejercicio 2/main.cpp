#include<iostream>


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







    return 0;
}
