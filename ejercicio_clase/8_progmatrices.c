/*------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel */
/* e-mail:palomec_94@hotmail.com */
/* fecha de creacion: 19/04/18 */
/* fecha de actualizacion: 19/04/18 */
/* programa que muestra matrices  */
/*------------------------------------------------------------*/
#include <stdio.h>
int main (void)
{
  int i,j,num;
  const int k=1,p=4;
  int maticuad[4][4];
  int matirecta[3][4];
  int maticolum[p][k];

  printf("Ingresa los datos que quieres guardar en la matriz\n");
  for (i=0;i<4;i++)
  {
  for (j=0;j<4;j++)
  {
    printf("Dame un numero\n");
    scanf("%d",&  maticuad[i][j]);

  }
}
printf("--------  Matriz cuadrada --------");
for (i=0;i<4;i++)
{ printf("\n" );
  for (j=0;j<4;j++)
  {
    printf("%d ",maticuad[i][j]);

  }
}
printf("\n");
printf("Ahora vamos con la matriz rectangular\n");
for(i=0;i<3;i++)
{
  for (j=0;j<4;j++)
  {
    printf("Dame un numero\n");
    scanf("%d",& matirecta[i][j]);
  }
}
printf("-------- Matriz rectangular --------");
for(i=0;i<3;i++)
{
  printf("\n");
  for(j=0;j<4;j++)
  {
    printf("%d ", matirecta[i][j]);
  }
}
printf("\n");
printf("Ahora vamos con la matriz de una sola columna");
for(i=0;i<p;i++)
{
  for (j = 0; j < k; j++)
   {
     printf("Dame un numero\n");
     scanf("%d",& maticolum[i][j]);
  }
}
for(i=0;i<p;i++)
{
  for (j = 0; j < k; j++)
   {
     printf("\n%d\n",maticolum[i][j]);

  }
}




return 0;
}
