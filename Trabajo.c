#include<stdio.h>
#include <string.h>

struct TTabla {      // Estructura que almacena todos los simbolos para la creación de la tabla periódica.
	char elemento[3];
};

int main(){
	
	FILE *pfichero1;
	
	int opcion,num_atom,con=0;
	int nelemento=0,k,longitud;
	char nombre[30],plata[3];
	
	struct TTabla clase[500];
	
	pfichero1 = fopen("Tabla.txt", "r");
	
	if(pfichero1 == NULL){// Comprobamos que el fichero existe y que funciona correctamente.
		
		printf("No se ha podido crear el fichero.\n");
		return 0;
	}
	
	while(fscanf(pfichero1, "%s", clase[nelemento].elemento) != EOF){//Con este bluce recorremos el fichero y lo almacenamos en el vector de estructuras.
		
		nelemento++;// con esta variable contamos toods los elementos de la tabla periódica.
	}
	
	fclose( pfichero1 );// Cerramos el fichero, puesto que no lo vamos a utilizar más.
	
	
	
	printf("%s",clase[0].elemento);
	printf("                                                  ");
	printf("%s",clase[1].elemento);
	printf("\n");
		
	for(k=2; k<=3; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);//En cada bucle para poner la tabla bien ordenada medimos la longitud del símbolo, que puede ser de 1 ó 2 caracteres,
		if (longitud==1){				   //y si longitud = 1 imprimimos un espacio para poder colocar todos los símbolos bien.
			printf(" ");
		}
	}
		
	printf("                              ");
		
	for(k=4; k<=9; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
		
	printf("\n");
		
	for(k=10; k<=11; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
		
	printf("                              ");
		
	for(k=12; k<=17; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
		
	printf("\n");
		
	for(k=18; k<=35; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
	
	printf("\n");
		
	for(k=36; k<=53; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}

	printf("\n");
	
	for(k=54; k<=71; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
	
	printf("\n");
		
	for(k=72; k<=89; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}

	printf("\n\n      ");
	
	for(k=90; k<=103; k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
	
	printf("\n      ");
	
	for(k=104; k<=nelemento-1 ;k++){
		printf("%s ", clase[k].elemento);
		longitud=strlen(clase[k].elemento);
		if (longitud==1){
			printf(" ");
		}
	}
	printf("\n\n\n\n");	
	
	
	printf("------------------------------------------\n");
	printf("------Programa de la Tabla Periodica------\n");
	printf("------------------------------------------\n\n\n");
        printf("Menu de opciones.\n\n");
	
	printf("\t1. Introduce tus credenciales.\n\n");
	
	printf("\t2. Introduce el numero del elemento y te decimos informacion sobre el.\n\n");
	
	printf("\t3. Realizar Cuestionario .\n\n");
	
	printf("\t4. Cerrar el programa.\n\n");
	
	 do{ 
	     printf("introduce una opcion del menu.\n");
	     scanf("%d",&opcion);
	     switch(opcion){
	     	case 1:
	     		printf("introduce tu nombre y apellidos.\n");
	     		fflush(stdin);
	     		gets(nombre);
	     	break;
	     	case 2:
			 printf("introduzca el numero atomico del elemento.\n");//Se introduciran informacion de los elementos introducidos
			 scanf("%d",&num_atom);
		break;
		case 3:
			printf("cual es el simbolo de la plata?.\n");  //haremos que el usuario realice un cuestionario sobre la tabla periodica.
			gets(plata);			
		break;
		case 4:
			printf("Gracias por usar nuestro programa. Hasta pronto.\n");//El usuario sale del programa
		break;
			     	
	        default: 
			     printf("ERROR. Porfavor introduce un numero valido.\n");	     	
		 }
	     
	 }while (opcion!=4);
	
}
