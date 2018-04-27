/*------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel */
/* e-mail:palomec_94@hotmail.com */
/* fecha de creacion: 25/04/18 */
/* fecha de actualizacion: 25/04/18 */
/* programa que convierte numeros binarios a decimal  */
/*------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
int main(void)
{
int num_dig,i,j,resul,binario,sum=0,q;

  puts("Dame cuantos digitos tiene el numero binario que quieres convertir");
  scanf("%d",&num_dig);
  int array[num_dig];
  for(i=0;i<num_dig;i++)
    {
      printf("Ingresa el digito\n");
      scanf("%d",& array[i]);
      q=array[i] * pow(2,i);
      sum=sum+q;
    }

  printf(" El numero decimal es el siguiente %d\n",sum);


  return 0;
}
