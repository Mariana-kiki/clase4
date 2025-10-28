/*Mariana Gutiérrez Acosta
clase 4 ejercicio 1*/

#include <stdio.h>
#include <string.h>

void main()
{
  char user[5], pass[5];
  int correct = 0;
  int intentos = 0;

  do
  {
    printf("Nombre: ");
    scanf("%s", &user);
    printf("Contrasena: ");
    scanf("%s", &pass);

    if((strcmp(user,"root") == 0) && (strcmp(pass, "1234") == 0))
    {
      correct = 1;
    }
    else
    {
      intentos = intentos + 1;
      printf("Volver a dar los datos\n");
    }
  }
  while((intentos < 3) && (correct == 0));

  if(correct == 1 && intentos <3)
  {
    printf("Bienvenido al sistema");
  }
  else
  {
    printf("Se ha superado el numero de intentos");
  }
}
