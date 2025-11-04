/*Mariana Gutiérrez Acosta
clase 4 ejercicio 2*/

#include <stdio.h>

int main() {
    int numeros[10];
    int suma = 0;
    float media;
    int mayor, menor;

    // Solicitar 10 números positivos
    for (int i = 0; i < 10; i++) 
    {
        do 
        {
            printf("Introduce el número positivo #%d: ", i + 1);
            scanf("%d", &numeros[i]);
            if (numeros[i] <= 0) 
            {
                printf("Por favor, introduce un número entero positivo.\n");
            }
        } while (numeros[i] <= 0);
    }

    // Inicializar mayor y menor con el primer número
    mayor = menor = numeros[0];

    // Calcular suma, mayor y menor
    for (int i = 0; i < 10; i++) 
    {
        suma += numeros[i];
        if (numeros[i] > mayor) 
        {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) 
        {
            menor = numeros[i];
        }
    }

    // Calcular media
    media = suma / 10.0;

    // Mostrar resultados
    printf("\nResultados:\n");
    printf("Suma de los números: %d\n", suma);
    printf("Media de los números: %.2f\n", media);
    printf("Mayor número introducido: %d\n", mayor);
    printf("Menor número introducido: %d\n", menor);

    return 0;
}
