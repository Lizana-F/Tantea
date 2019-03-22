#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int a=10 ,*puntero_a;
	puntero_a=&a;
	
	printf("contenido de la variable a:%d\n\n",a);
	printf("1-contenido del puntero_a:%d \n 2-direccion de memoria almacenada del  puntero:%p \n 3-direccion de memoria de la variable a:%p \n 4-direccion de memoria del puntero:%p\n\n",*puntero_a,puntero_a,&a,&puntero_a);
	
	printf("cantidad de bites que ocupa la variable a=%d\n ",sizeof(a));
	
	
	return 0;
}