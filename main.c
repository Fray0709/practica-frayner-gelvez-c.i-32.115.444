#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
	#define ROJO     "\x1B[31m"
	#define VERDE   "\x1B[32m"
	#define BLANCO "\033[0m"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int cantusuario;
	char titulo[100][20];
	char genero[100][20];
	char autor[100][20];
	char codigo [100][20];
	int i,cantdisp[50];
	float precio[30],ganancia[30];
	char nombre[30][10];
	char respuesta[10][10];
    int longitud,j;
    longitud=0;
    
    
    
	
	printf ("la cantidad de libros que desea ingresar:  ");
	scanf ("%d", &cantusuario);
	for (i=0;i<cantusuario;i++){
		
		printf("\tLibro %d\n", i+1);
		
		printf("Ingrese titulo del libro numero %d\n",i+1);
		scanf (" %[^\n]s", &titulo[i]);
		printf("Ingrese autor del libro numero %d\n",i+1);
		scanf (" %[^\n]s", &autor[i]);
		printf("Ingrese genero del libro numero %d\n",i+1);
		scanf ("%s", &genero[i]);
		
		do {
			
			printf("Ingrese  codigo del libro numero %d\n",i+1);
			scanf ("%s", &codigo[i]);
			longitud =  strlen(codigo[i]);
			if (longitud != 10){
				printf("Deben ser 10 caracteres\n");
			}
		}while (longitud != 10);
		
		do{
		
		printf("Ingrese  precio del libro numero %d\n",i+1);
		scanf ("%f", &precio[i]);
		if (precio[i] < 0){
			printf("El precio no puede ser negativo\n");
		}
		
		}while (precio[i]<0);
		printf("Ingrese cantidad disponible del libro numero %d\n",i+1);
		scanf ("%d", &cantdisp[i]);
		
	}
	for (i=0;i<cantusuario;i++){
	ganancia[i]= cantdisp[i]*precio[i];	
}
	
	
	printf ("\nTITULO:\t              AUTOR:\t      GENERO:\t      CODIGO:  \t    PRECIO:\t   STOCK:\t   GANANCIA:\t");
	for (i=0;i<cantusuario;i++){
		
		
		for (j=0;j<strlen(titulo[i]);j++){
			titulo[i][j] = toupper (titulo[i][j]);
		}
		for (j=0;j<strlen(autor[i]);j++){
			autor[i][j] = toupper (autor[i][j]);
		}
		for (j=0;j<strlen(genero[i]);j++){
			genero[i][j] = toupper (genero[i][j]);
		}
		
		printf("\n");
		printf("\n%s", titulo[i]);
		printf("\t     ");	
		
		printf("%s",autor[i]);
		printf("\t   ");
		
		printf("%s",genero[i]);
		printf("\t    ");
		
		printf("%s",codigo[i]);
		printf("\t    ");
		
		printf("%.2f",precio[i]);
		printf("\t       ");
	
		printf("%d",cantdisp[i]);
		printf("\t      ");
			
	
	 	
	 	if (ganancia[i]<0){
	 		printf(ROJO"%.2f"BLANCO,ganancia[i]);
		printf("\t");
		printf("\n");
		 } else if (ganancia[i]>0) {
		 
		 	printf(VERDE"%.2f"BLANCO,ganancia[i]);
		printf("\t");
		printf("\n");
		 }
	
		fflush(stdout);
	}
	
	printf ("Ingrese el  libro (en mayuscula):  ");
	scanf ("%s", &nombre);

    printf ("\t\n El resultado de su busqueda fue: \n "); 
    
	for (i=0;i<cantusuario;i++) {
		
	    
	 	if(strcmp(titulo[i], nombre) == 0)  {
	 		printf ("TITULO: %s\t DEL AUTOR: %s\t DE GENERO: %s\t CODIGO: %s\t",titulo[i], autor[i], genero[i], codigo[i]);		
		}
		
		if(strcmp(autor[i], nombre) == 0)  {
	 		printf ("TITULO: %s\t DEL AUTOR: %s\t DE GENERO: %s\t CODIGO: %s\t",titulo[i], autor[i], genero[i], codigo[i]);		
		}
		
		if(strcmp(genero[i], nombre) == 0)  {
	 		printf ("TITULO: %s\t DEL AUTOR: %s\t DE GENERO: %s\t CODIGO: %s\t",titulo[i], autor[i], genero[i], codigo[i]);		
		}
		if(strcmp(codigo[i], nombre) == 0)  {
	 		printf ("TITULO: %s\t DEL AUTOR: %s\t DE GENERO: %s\t CODIGO: %s\t",titulo[i], autor[i], genero[i], codigo[i]);		
		}
	printf("\n");
	}
	 
	return 0;
}
