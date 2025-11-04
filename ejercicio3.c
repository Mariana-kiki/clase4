/*Mariana Gutiérrez Acosta
clase 4 ejercicio 3*/

#include <stdio.h>

void main() 
{
    int numero, suma = 0, contador = 0;

    while (contador < 10 && suma <= 100) 
    {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        suma += numero;
        contador++;
    }

    if (contador == 10) 
    {
        printf("Se han introducido 10 números.\n");
    } 
    else 
    {
        printf("La suma de los números introducidos es mayor que 100.\n");
    }
}
