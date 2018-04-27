/*------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel */
/* e-mail:palomec_94@hotmail.com */
/* fecha de creacion: 12/04/18 */
/* fecha de actualizacion: 12/04/18 */
/* programa donde se utilizan macros */
/*------------------------------------------------------------*/
#include <stdio.h>

/*Declaracion de constantes*/
/*No se reservan espacios en memoria*/
#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100

/*Implementacion de macro*/
#define SUMA(x,y) x+y
#define RESTA(x,y) x-y
#define MULT(x,y) x*y
#define DIV (x,y) x/y
#define POTCUADRADO(x) x**x
#define POTCUBO(x) x*x*x


/*Definir ciclos con macro*/
#define CICLOFOR(x,y)for(x=0;x<y;x++)
#define CICLOWHILE(p,t)while(p>t)
#define CICLODOWHILE do{}while(z<f);

/*Declaracion de constantes con const */
/*Se reservan espacios en memoria*/
const float pi=3.1416;
const float g=8.81;
const int tamanio=10;
const int min=0;
const int max=100;
int main (void)
{
/*Imprimir constantes #define*/
printf("%.4f\n",PI);
printf("%f\n",G);
printf("%d\n",TAMANIO);
printf("%d\n",MIN);
printf("%d\n\n",MAX);

/*Imprimir macros*/

printf("\n%d\n",SUMA(3,4));

/*Imprimir constantes const*/
printf("%.4f\n",pi);
printf("%.2f\n",g);
printf("%d\n",tamanio);
printf("%d\n",min);
printf("%d\n",max);

/*Utilizando las macro de ciclo*/
int x;
int y=10;

CICLOFOR(x,y)
{
	printf("\n Hola mundo...\n");
}
int p=5;
int t=4;
CICLOWHILE(p,t)
{
	printf("hola\n");
	p=p-3;
}
int z=5;
int f=1;
CICLODOWHILE(z,f);
{
	printf("Buenas tardes\n");
}

return 0;
}
