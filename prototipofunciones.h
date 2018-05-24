/*----------------------------------------------------------------*/
/* Autor: Palomec Arias Eliezer Fidel			          */
/* E-mail: palomec_94@hotmail.com                                 */
/* Fecha creacion: 20/05/2018                                     */
/* Fecha actualizacion:22/05/2018                                           */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_MAR      50        /* Definicion del tamanio del arreglo unidimensional */
#define TAM_MOD      12        /* Tamanio de la matricula del alumno                */
#define TAM_COL    12
#define TAM_COR		 10        /* Tamanio de la fecha de nacimiento                 */
#define TOTAL_RELOJ 10        /* Tamanio total del alumno                          */


/* Se define una estructura para modelar los datos de una alumno. */
/* Los miembros de la estructura son:                             */
/*                                    - marca                    	*/
/*                                    - modelo                 		*/
/*                                    - color           					*/
/*                                    - correa                    */
/*                                    - precio                  	*/
/*                                    - peso                      */
typedef struct
{
	char marca[TAM_MAR];
	char modelo[TAM_MOD];
	char color[TAM_COL];
	char correa[TAM_COR];
	float precio;
	float peso;
}Reloj;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarReloj(Reloj);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de alumnos */
Reloj crearnuevoreloj(void);
void mostrarlistareloj(Reloj [], int);
void buscarreloj(Reloj []);
void actualizarReloj(Reloj []);
void eliminarReloj(Reloj []);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarAlumno() */
Reloj * eliminarReloj(Reloj [],int );


/* Funciones que permiten ordenar los datos de los alumnos */
int * ordenarAscendente(Reloj [], int []);
int * ordenarDescendente(Reloj [], int []);


#endif
