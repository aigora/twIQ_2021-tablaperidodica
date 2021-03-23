#include<stdio.h>
int main(){
	int opcion,num_atom,con=0;
	char nombre[30],plata[3];
	
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
			     	
			default: printf("ERROR. Porfavor introduce un numero valido.\n");
			
			     	
		 }
	     
	 }while (opcion!=4);
	 
	 return 0;
}
