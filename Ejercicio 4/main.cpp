#include <iostream>
#include <string>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};







int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!\n";
    return 0;
}
