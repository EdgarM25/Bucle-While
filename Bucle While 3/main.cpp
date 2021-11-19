#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int hasta = 20;
    int numero = 1;
    while (numero <= hasta){
        printf("%d\n", numero);
        numero++;
    }
    int lineas = 0;
    while(lineas < 5){
        lineas++;
        printf("%d - Prueba\n", lineas);
    }

    return 0;
}
