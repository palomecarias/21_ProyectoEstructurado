/*----------------------------------------------------------------*/
/* Autor: Eliezer Fidel Palomec Arias		                  */
/* E-mail: palomec_94@hotmail.com                                 */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion:22/05/2018                                 */
/* Descripcion: implementacion de funciones sobre la estructura   */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numRelojes;



Reloj crearnuevoreloj(void)
{
  Reloj reloj;

  printf(_TBLANCO _NEGRITA "Introduce la marca del reloj: "              _NNEGRITA _TVERDE);
  fgets(reloj.marca, TAM_MAR, stdin);                                    /* Solicita el nombre del alumno al usuario          */
  strcpy(reloj.marca, strtok(reloj.marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el modelo del reloj: "           _NNEGRITA _TVERDE);
  fgets(reloj.modelo, TAM_MOD, stdin);                                 /* Solicita la matricula el alumno al usuario        */
  strcpy(reloj.modelo, strtok(reloj.modelo, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduce el color del reloj: " _NNEGRITA _TVERDE);
  fgets(reloj.color, TAM_COL, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(reloj.color, strtok(reloj.color, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduce el material de la correa: "                _NNEGRITA _TVERDE);
  fgets(reloj.correa, TAM_COR, stdin);                         /* Solicita la fecha de nacimiento al usuario        */
  strcpy(reloj.correa, strtok(reloj.correa, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */


  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

  printf(_TBLANCO _NEGRITA "Introduce el precio del reloj: "            _NNEGRITA _TVERDE);
  scanf("%f", &reloj.precio);

  printf(_TBLANCO _NEGRITA "Introduce el peso del reloj: "                _NNEGRITA _TVERDE);
  scanf("%f", &reloj.peso);
  printf("\n\n");

  return reloj;
}




void mostrarlistareloj(Reloj listaReloj[], int ordenar)
{
  int arrayTemp[numRelojes];
  for(int i = 0; i < numRelojes; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaReloj, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaReloj, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numRelojes; i++)
  {
    mostrarReloj(listaReloj[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarreloj(Reloj listaReloj[])
{
  int opcionBuscar;
  char marBuscar[TAM_MAR];            /* Almacena el nombre a buscar dentro de la estructura                */
	char modeBuscar[TAM_MOD];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar reloj por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Marca\n");
  printf(_TBLANCO   _NEGRITA "\t2. Modelo \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xMarca:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese la marca del reloj del alumno: ");
        fgets(marBuscar, TAM_MAR, stdin);
        strcpy(marBuscar, strtok(marBuscar, "\n"));

        for(int i = 0; i < numRelojes; i++)
            if(strcmp(marBuscar, listaReloj[i].marca) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarReloj(listaReloj[i]);
            }
            break;

      case _xModelo:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el modelo: ");
          fgets(modeloBuscar, TAM_MOD, stdin);
          strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

          for(int i = 0; i < numRelojes; i++)
          if(strcmp(modeloBuscar, listaReloj[i].modelo) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarReloj(listaReloj[i]);
          }
          break;
  }
}



void actualizarReloj(Reloj listaReloj[])
{
  int opcionBuscar;
  char marBuscar[TAM_MAR];            /* Almacena el nombre a buscar dentro de la estructura                */
	char modeloBuscar[TAM_MOD];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar el reloj a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Marca\n");
  printf(_TBLANCO   _NEGRITA "\t2. Modelo \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(marBuscar, TAM_MAR, stdin);
          strcpy(marBuscar, strtok(marBuscar, "\n"));

          for(int i = 0; i < numRelojes; i++)
          {
              if(strcmp(marBuscar, listaReloj[i].marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarReloj(listaReloj[i]);

                  printf("\n\n");

                  listaReloj[i] = crearnuevoreloj();

                  mostrarEncabezadoTabla();
                  mostrarReloj(listaReloj[i]);

                  break;
              }
          }
          break;

      case _xModelo:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el modelo: ");
          fgets(modeloBuscar, 50, stdin);
          strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

          for(int i = 0; i < numRelojes; i++)
          {
              if(strcmp(modeloBuscar, listaReloj[i].modelo) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarReloj(listaReloj[i]);

                  printf("\n\n");

                  listaReloj[i] = crearnuevoreloj();

                  mostrarEncabezadoTabla();
                  mostrarReloj(listaReloj[i]);

                  break;
              }
          }

          break;
  }
}



void eliminarReloj(Reloj listaReloj[])
{
  int opcionBuscar;
  char marBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
	char matriculaBuscar[TAM_MAR];         /* Almacena la matricula a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar reloj por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. marca\n");
  printf(_TBLANCO   _NEGRITA "2. Modelo \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xMarca:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce la marca: ");
          fgets(marBuscar, TAM_MAR, stdin);
          strcpy(marBuscar, strtok(marBuscar, "\n"));

          for(int i = 0; i < numRelojes; i++)
          {
              if(strcmp(marBuscar, listaReloj[i].marca) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarReloj(listaReloj[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaReloj));
                    listaReloj = eliminarReloj(listaReloj, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case _xModelo:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduce el modelo: ");
          fgets(modeBuscar, TAM_MOD, stdin);
          strcpy(modeloBuscar, strtok(modeloBuscar, "\n"));

          for(int i = 0; i < numRelojes; i++)
          {
              if(strcmp(modeloBuscar, listaReloj[i].modelo) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarReloj(listaReloj[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaReloj = eliminarReloj(listaReloj, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}



Reloj * eliminarReloj(Reloj listaReloj[], int posicion)
{
  if(posicion < (numRelojes - 1))
  {
    for(int j = posicion; j < numRelojes-1; j++)
    {
      strcpy(listaReloj[j].marca,          listaReloj[j+1].marca);
      strcpy(listaReloj[j].modelo,       listaReloj[j+1].modelo);
      strcpy(listaReloj[j].color, listaReloj[j+1].modelo);
      listaReloj[j].correa    = listaReloj[j+1].correa;
      listaReloj[j].precio = listaReloj[j+1].precio;
      listaReloj[j].peso     = listaReloj[j+1].peso;
    }
  }

  strcpy(listaReloj[numRelojes-1].marca,          "");
  strcpy(listaReloj[numRelojes-1].modelo,       "");
  strcpy(listaReloj[numRelojes-1].color, "");
  listaReloj[numRelojes-1].correa    = '\0';
  listaReloj[numRelojes-1].precio = -1;
  listaReloj[numRelojes-1].peso     = -1;

  numRelojes--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaReloj;
}
