#include <stdio.h>
#define tamano 5
float contador;
int matriz[tamano][tamano];
int main(){
	int fila, columna, opcion, posicion;
	contador=0.0;
	do{
		for(fila=0; fila<tamano; fila++){
			for(columna=0; columna<tamano; columna++){
			matriz[tamano][columna]='0';
			}
		}
		printf("Elija una opcion:\n");
		printf("\n------------------------------------------------------\n");
		printf("\n1-Vender entrada\n");
		printf("\n2-Mostrar ganancias\n");
		printf("\n*Cualquier numero para salir");
		scanf("%d", &opcion);
		
		switch(opcion){
		case 1:
			printf("Asientos disponibles'O' / Asientos vendidos'X'\n");
			for(fila=0; fila<tamano; fila++){
				for(columna=0; columna<tamano; columna++){
					printf("[%d]", matriz[fila][columna]);
				}
				printf("\n");
			}
			printf("¿Que posicion desea?");
			scanf("%d", &posicion);
			for(fila=0; fila< tamano; fila++){
				for(columna=0; columna< tamano; columna++){
					if(matriz[fila][columna]=='0' && posicion>matriz[1][posicion] ){
						matriz[fila][columna]='X';
						printf("Asiento vendido con exito!\n Total a cancelar $5");
						contador=contador+5.0;
					}
				}
			}
		break;
			
		case 2:
			printf(" Las ganancias son: %f", contador);	
		
		break;
		}
	}while(opcion>0 && opcion<3);
	
	return 0;
}
