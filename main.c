#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char municipios[15][100];
	int max_litrosmunicipio;
	float lluvia[15][30];
	float promedio[15];
	float promedioall;
	float promedio_max, promedio_min;
	int i,j,max_litrosdia;
	promedio_min=999;
	promedio_max=0;
	
	max_litrosdia=0;
	  
	
	for (i=0;i<2;i++){
		printf("Ingrese el nombre del municipio %d: ", i+1 );
		gets (municipios[i]);
		
		for (j=0;j<4;j++){
			printf("Ingrese la cantidad de lluvia caida en el municipio %s : ", municipios[i]);
			scanf ("%f", &lluvia[i][j]);
			if (max_litrosdia < lluvia[j]){
				max_litrosdia = lluvia [j];
			}
		}
		if (max_litrosmunicipio < lluvia[i][j]){
			max_litrosmunicipio = lluvia [i][j];
		}
		fflush(stdin);
	}
	
	for (i=0;i<2;i++){
		promedio[i]=0;
		for (j=0;j<4;j++){
			promedio[i] += lluvia [i][j];
			
		
		}
		
		promedioall += promedio[i]/4;
		promedio[i] = promedio[i]/4;
		if (promedio_max <= promedio [i]){
			promedio_max = promedio [i];
		} 
		if 	(promedio_min > promedio[i]) {
		
			promedio_min = promedio [i];
		    }
	}

	for (i=0;i<2;i++){
		printf ("el promedio del municipio %s es : %.2f\n", municipios[i], promedio[i]);
	}
	printf ("\nel promedio general es %f\n",promedioall);
	
	printf ("\n\tLISTADO DE MUNICIPIOS\n\n");
	printf ("  municipios\tpromedio");
	for(i=0;i<2;i++){
		printf("\n");
		
			printf ("%s\t\t%f",municipios[i],promedio[i]);
		
	}

	printf ("\n\nel promedio maximo es %.2f\t y el minimo es %.2f",promedio_max,promedio_min);
	printf ("el municipio con maximo litros tuvo: %d litros",max_litrosmunicipio);
	printf ("el dia con maximo litros tuvo: %d litros",max_litrosdia);
	
	return 0;
}
