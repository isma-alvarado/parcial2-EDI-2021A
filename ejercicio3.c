#include<stdio.h>
#include<stdlib.h>
#define RENGLON 20
#define COLUMNA 20


void LlenarMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
void ImprimeMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
void ImprimeMatrizInversa(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);


int main()
{
	int ren,col;
	int matriz[RENGLON][COLUMNA];

	printf("\nDime el numero de los Renglones: \n");
	scanf("%d",&ren);


	printf("\n Dime el numero de las Columnas: \n");
	scanf("%d",&col);

	 printf("\n");


	if(ren>RENGLON || col>COLUMNA)

	{
	printf("Demasiado grande, dime un numero mas chico");


	}
	else {

    LlenarMatriz(ren,col,matriz);
    printf("MATRIZ ORIGINAL");
    printf("\n");
    printf("\n");

	ImprimeMatriz(ren,col,matriz);
		printf("\n");
    printf("MATRIZ INVERSA");
	printf("\n");
    printf("\n");

    ImprimeMatrizInversa(ren,col,matriz);
	printf("\n");

	}
    system("pause");
}



void LlenarMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{
        printf("Dime el dato de la posicion [%d] [%d]: ",i+1,j+1);
        scanf("%d",&matrizdos[i][j]);
        printf("\n");

     	}

	}
	 printf("\n");
	}







void ImprimeMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{

	   printf(" %6d ",matrizdos[i][j]);


	}

		printf("\n");
	}

}



void ImprimeMatrizInversa(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(j=0;j<num2;j++)
	{
	      for(i=0;i<num1;i++)
     	{

	   printf(" %6d ",matrizdos[i][j]);


	}

		printf("\n");
	}

}

