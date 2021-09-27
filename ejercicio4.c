#include<stdio.h>
#include<stdlib.h>
#define RENGLON 20
#define COLUMNA 20


void LlenarMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
void ImprimeMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
void BuscarValor(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);

int main()
{
	int ren,col,numero;
	int matriz[RENGLON][COLUMNA];

	printf("\n Dime el numero de los Renglones: \n");
	scanf("%d",&ren);


	printf("\n Dime el numero de las Columnas: \n");
	scanf("%d",&col);




	 printf("\n");


	if(ren>RENGLON || col>COLUMNA)

	{
     printf("\n");
	printf("Demasiado grande, dime un numero mas chico");
     printf("\n");

	}
	else {

    LlenarMatriz(ren,col,matriz);
	ImprimeMatriz(ren,col,matriz);


	printf("\n");

	printf("\n");
	printf("\n");
	BuscarValor(ren,col,matriz);
	ImprimeMatriz(ren,col,matriz);

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




void BuscarValor(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{
    int  mayor=0;   //Este compara todos los valores

	int i,j,ren,col;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{

        if(matrizdos[i][j]>mayor)
         {

             mayor=matrizdos[i][j];

              ren=i+1;
              col=j+1;


         }

     	}

	}
	 printf("\n");

 printf("\n la posicion del numero mayor es: [%d][%d]",i,j);


                printf("\n El mayor numero es: %d \n",mayor);

  printf("\n");
}





void ImprimeMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{
         printf("  ");
	   printf(" %6d ",matrizdos[i][j]);
        printf("  ");
	}

		printf("\n");
	}

}




