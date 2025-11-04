/*Mariana Gutiérrez Acosta
clase 4 ejercicio 4*/

#include <stdio.h>

NUMERO_SECRETO 42

void main() 
{
    int intento, contador = 0;

    do 
    {
        printf("Adivina el número (entre 1 y 100): ");
        scanf("%d", &intento);
        contador++;

        if (intento < NUMERO_SECRETO) 
        {
            printf("El número secreto es mayor.\n");
        } 
        else 
          if (intento > NUMERO_SECRETO) 
          {
            printf("El número secreto es menor.\n");
          }

        } 
     while (intento != NUMERO_SECRETO);
        {
            printf("¡Correcto! Has adivinado el número en %d intento(s).\n", contador);
        }
    if (contador < 5) 
    {
        printf("Enhorabuena!\n");
    } 
    else 
      if (contador <= 10) 
      {
        printf("No está mal!\n");
      } 
    else 
    {
        printf("Debe practicar más.\n");
    }
}
