#include <stdio.h>
#include <stdlib.h>
/* Declaracion de constantes */
#define ROW 3 /* Numero de filas de la matriz */
#define COL 3 /* Numero de columnas de la matriz */
#define MAX 100 /* Rango superior de los datos aleatorios */

int main (void)
{
  int array[ROW][COL];
  /* Inicuializar el array con valores aleatorios 1-100*/
  for (int i=0;i<ROM;i++) /* Ciclo que controla las filas del array */
  {
    /* Asignacion de datos al array */
    for(j=0;j<COL;J++) /* Ciclo que controla las columnas del array */
    {
      /* Asignacion de datos al array */
      /* Utilizar la funcion rand() para obtener datos de forma aletaroria */
      /* La funcion se encuentra definida dentro de la biblioteca stdlib.h */
      array[i][j]=rand()%(  MAX+1);
      /* Tarea para el viernes: generar valores aleatorios de tipo flotante emntre 0-1000*/
    }
  }
  printf ("\x1b[32mDatos aleatorios de la matriz: array[%d][%d]\n",ROW,COL);
  return 0;
}
