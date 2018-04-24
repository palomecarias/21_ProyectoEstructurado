/*------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel */
/* e-mail:palomec_94@hotmail.com */
/* fecha de creacion: 12/04/18 */
/* fecha de actualizacion: 12/04/18 */
/* programa que determina cuantas veces  ingreso un mismo numero */
/*------------------------------------------------------------*/

#include <stdio.h>
int main (void)
{
int a,num,arreglo[9],i,j,cont=0;
puts("Ingresaras 9 numeros enteros entre el 0 y 9");
for(a=0;a<9;a++)                                                          
{
	printf("Ingrese el numero %d de 9\n",a+1);
	scanf("%d",&num);
	arreglo[a]=num;
}
for(i=0;i<9;i++)
{
cont=0;
for(j=0;j<9;j++)
	{
		if( i==arreglo[j])
		{
			cont++;
		}
	}

			printf("el numero %d se repite:%d veces\n",i,cont);

}
return 0;
}


