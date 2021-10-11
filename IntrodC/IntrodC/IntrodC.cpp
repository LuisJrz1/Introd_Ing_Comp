#include <stdio.h>
#include <iostream>

int main()
{
    int iDato1, iDato2, iResultado;
    printf("\n ---- SUMA DE DATOS [DOS DATOS] ---- \n");
    printf("Ingresa tu primer numero: ");
    scanf_s("%d", &iDato1);

    printf("Ingresa tu segundo numero: ");
    scanf_s("%d", &iDato2);

    iResultado = iDato1 + iDato2;

    printf("El resultado de la suma es: %d", iResultado);
}

