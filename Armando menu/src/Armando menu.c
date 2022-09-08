/*
Victoria Rodriguez DIV D
Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar
 */

#include <stdio.h>
#include <stdlib.h>

#include "bibliomenu.h"

int main(void)
{
	setbuf(stdout, NULL);
	int opcionIngresada;
	int banderaIniciar=0;
	int banderaProcesar = 0;
	int salida;

	do
	{
		opcionIngresada = menu();
		switch(opcionIngresada)
		{
		case 1:
			printf("El programa ya inició");
			banderaIniciar = 1;
		break;
		case 2:
			if(banderaIniciar == 1)
			{
				printf("El programa ya fue procesado");
				banderaProcesar = 1;
			}
			else
			{
				printf("Debe Iniciar el programa para procesar");
			}
		break;
		case 3:
			if(banderaIniciar == 1 && banderaProcesar == 1)
			{
				printf("El programa ya fue finalizado");
			}
			else
			{
				printf("Debe Iniciar y Procesar el programa para finalizar");
			}
		break;
		case 4:
			printf("Esta seguro que desea salir? Presione 5 para salir");
			scanf("%d", &salida);
		break;
		default:
			printf("La opción no es valida");
		break;
		}
	}
	while(salida != 5);

	return EXIT_SUCCESS;
}

