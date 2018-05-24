/*----------------------------------------------------------------*/
/* Autor: Eliezer Fidel Palomec Arias			          */
/* E-mail: palomec_94@hotmail.com                                 */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:                                           */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E    A L U M N O S" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de Relojes");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de Relojes");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de Relojes Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de Relojes Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar Reloj");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar Reloj");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar Reloj");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\tMARCA\t|   MODELO    |      COLOR     |", "CORREA", "PESO", "PRECIO");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarReloj(Reloj reloj)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%s\t|\t%f\t|\t%f\t|", reloj.marca, reloj.modelo, reloj.color, reloj.correa, reloj.peso, reloj.precio);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
