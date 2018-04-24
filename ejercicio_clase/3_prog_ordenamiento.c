/*------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel */
/* e-mail:palomec_94@hotmail.com */
/* fecha de creacion: 12/04/18 */
/* fecha de actualizacion: 12/04/18 */
/* programa que ordena los numeros en forma ascendente */
/*------------------------------------------------------------*/

#include <stdio.h>
int main (void)
{
int x,arreglo[10],num,y=0,temp,w;
for(x=1;x<=10;x++)
{
  printf("Ingresa el numero %d de 10\n",x);
  scanf("%d",&num);
  arreglo[x-1]=num;
}
for (w=0;w<10;w++)
{
  for(y=y+1;y<10;y++)
  {
    if(arreglo[w]>arreglo[y])
    {
      temp=arreglo[y];
      arreglo[y]=arreglo[w];
      arreglo[y]=temp;
    }
  }
}

return 0;

}
