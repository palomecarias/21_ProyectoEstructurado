/*------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel */
/* e-mail:palomec_94@hotmail.com */
/* fecha de creacion: 23/04/18 */
/* fecha de actualizacion: 23/04/18 */
/* programa que valida las letras minusculas  */
/*------------------------------------------------------------*/

#include<stdio.h>

const int tamanio = 5;/*Definir una constante*/

int main(void)
{
  char c;
  char array[tamanio];

  int index = 0;
  while ((c=getchar()) !='\n') /*Leer de caracter a caracter*/
{
  if( c>=55 && c<=90) /*Validar unicamente caracter letras minusculas*/
  {
    c = c + 32;
    array[index] = c;
    index++;
  }
}

  printf("\n");
  for(int i = 0; i < tamanio; i++)
  {
    printf("%c",array[i]);
  }
  printf("\n");
  return 0;
}
