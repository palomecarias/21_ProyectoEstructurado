/*----------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel 				  */
/* E-mail: palomec_94@hotmail.com                                 */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:22/05/2018                                 */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numRelojes;

int * ordenarAscendente(Reloj listaReloj[], int arrayTemp[])
{
  for(int i = 0; i < numRelojes; i++)
  {
    for(int j = i + 1; j < numRelojes; j++)
    {
      if(strcmp(listaReloj[arrayTemp[i]].marca, listaReloj[arrayTemp[j]].marca) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Reloj listaReloj[], int arrayTemp[])
{
  for(int i = 0; i < numRelojes; i++)
  {
    for(int j = i + 1; j < numRelojes; j++)
    {
      if(strcmp(listaReloj[arrayTemp[i]].marca, listaReloj[arrayTemp[j]].marca) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
