#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu (){
   	int resultado, num1, num2;
	printf(" 1. Sumar\n 2. Restar\n 3. Multiplicar\n 4. Dividir\n 5. Potenciar\n 6. Raiz\n 7. Valor abs\n 8. Salir\n");
	printf ("\nIngrese el numero de la operacion:   ");
	scanf ("%d", &resultado);
	
	
	
	if (resultado == 8 ){
		exit(0);
	}
	if (resultado == 6 || resultado == 7  ){
    printf ("\nIngrese el  digito:  ");
    scanf ("%d", &num1);
	} else {
	printf ("\nIngrese el primer digito:  ");
	scanf ("%d", &num1);
	printf ("\nIngrese el segundo digito: ");
	scanf ("%d", &num2);
	}

	
	
	switch (resultado){
		
	case 1:
		printf("\nEl resultado es:  %d", suma(num1, num2));
	break;
	
	case 2:
		printf("\nEl resultado es:  %d", resta(num1, num2));
	break;
	
	case 3:
		printf("\nEl resultado es:  %d", multi(num1, num2));
	break;
	
	case 4:
		printf("\nEl resultado es:  %d", divide(num1, num2));;
	break;
	
	case 5:
		printf("\nEl resultado es:  %d", poten(num1, num2));
	break;
	
	case 6:
		printf("\nEl resultado es:  %d", raiz(num1));
	break;
	
	case 7:
		printf("\nEl resultado es:  %d\n", absoluto(num1));
	break;
	case 8:
		return 0;
	break;
	
	}
	printf("\n");
	menu();
	
	return 0;
}

int suma(int a, int b){
	return a+b;
}

int resta(int a, int b){
	return a-b;
}

int multi(int a, int b){
	return a*b;
}

int divide(int a, int b){
	return a/b;
}
 // potencia
int poten(int a, int b){
	return pow(a,b);
}
 // raiz
int raiz(int a){
	return sqrt(a);
}
// valor abs
int absoluto(int a){
	return abs (a);
}

int main(int argc, char *argv[]) {
	
	menu();
	
	
	
	
	return 0;
}
