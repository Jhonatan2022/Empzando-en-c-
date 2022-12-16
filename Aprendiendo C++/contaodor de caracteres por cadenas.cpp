#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
#include <iomanip>

using namespace std;

void tomar_info(char caracteres[]);
void mostrar_info(char caracteres[]);
int longitud_info(char cadena[]);
char nombre[50];
char apellido[50];


int main(int argc, char const *argv[])
{
    cout << "\nIngrese su nombre completo: ";
    tomar_info(nombre);
    cout << "\nIngrese su apellido completo: ";
    tomar_info(apellido);
    cout << "\nSe mostrara informacion sobre el nombre ingresado: " << endl;
    cout << "\nSu nombre es: ";
    mostrar_info(nombre);
    cout << "\nCantidad de caracteres en su nombre: " << longitud_info(nombre) << endl;
    cout << "\nSu apellido es: ";
    mostrar_info(apellido);
    cout << "\nCantidad de caracteres en su apellido: " << longitud_info(apellido) << endl;
    cout << "\nGracias... Presione [ENTER] para salir";
    getch();
}
void tomar_info(char caracteres[])
{
    char c;
    register int i = 0;
    while ((c = getchar()) != '\n')
    {
        caracteres[i++] = c;
        caracteres[i] = '\0';
    }
}
int longitud_info(char cadena[])
{
    register int i;
    for (i = 0; cadena[i]; i++)
        ;
    return (i);
}
void mostrar_info(char caracteres[])
{
    register int i;
    for (i = 0; caracteres[i]; i++)
        putchar(caracteres[i]);
}