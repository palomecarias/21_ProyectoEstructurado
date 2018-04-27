/*_________________________________________________________________*/
/* Autor: Palomec Arias Eliezer Fidel                              */
/* E-mail :palomec_94@hotmail.com                                  */
/* Fecha de Creacion : 25/04/2018                                  */
/* Fecha de Actualizacion : 25/04/2018                             */
/* Descripcion: programa que convierte numeros decimales a binario */
/*_________________________________________________________________*/



#include <stdio.h>
int main(void)

{
  int i = 0, y = 0, num,divi, conversion[90],cont = 0;
  printf("CONVERSION DE DECIMAL A BINARIO \n\n");

  printf("dame el numero \n" );

  scanf("%d",&num );

  divi=num;

  while (divi>0)

 {

   conversion[cont]=divi%2;

   divi=divi/2;

   cont++;
}

  for (int i = cont-1; i >=0; i--)

   {

    printf("%d",conversion[i]);

  }


  return 0;
}
