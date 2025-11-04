/*Mariana Gutiérrez Acosta
clase 4 ejercicio 5*/

#include <stdio.h>

#define NUMERO_SECRETO 58  

void main() 
{
    int intento, contador = 0;
    int ha_ganado = 0;

    while (contador < 5) 
    {
        printf("Intento %d: Adivina el número (entre 1 y 100): ", contador + 1);
        scanf("%d", &intento);
        contador++;

        if (intento == NUMERO_SECRETO) 
        {
            ha_ganado = 1;
            break;
        } 
        else 
          if (intento < NUMERO_SECRETO) 
          {
            printf("El número secreto es mayor.\n");
          } 
          else 
          {
            printf("El número secreto es menor.\n");
          }
     }

    if (ha_ganado) 
    {
        printf("¡Correcto! Has adivinado el número en %d intento(s).\n", contador);
        printf("¡Has ganado!\n");
    } 
    else 
    {
        printf("Lo siento, has agotado los 5 intentos. El número era %d.\n", NUMERO_SECRETO);
        printf("No has ganado esta vez.\n");
    }
}
