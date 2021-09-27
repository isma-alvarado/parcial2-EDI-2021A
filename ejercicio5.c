#include<stdio.h>
#include<stdlib.h>
#define RENGLON 20

#define COLUMNA 20


void LlenarMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
void ImprimeMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
int SimetricaMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);
void ImprimeMatrizTranspuesta(int num1,int num2,int matrizdos[RENGLON][COLUMNA]);

int main()
{
	int ren,col,numero;
	int verdadero;
	int matriz[RENGLON][COLUMNA];

	printf("\nDime el numero de los Renglones: \n");
	scanf("%d",&ren);


	printf("\n Dime el numero de las Columnas: \n");
	scanf("%d",&col);




	 printf("\n");


	if(ren>RENGLON || col>COLUMNA)

	{
     printf("\n");
	printf("Demasiado grande, dime un numero mas chico ");
     printf("\n");

	}

    if(ren==col)
    {


        printf("\n Es probable que sea simetrica por que es cuadrada \n");


        }
    else{
        printf("\n no es simetrica por que no es cuadrada  \n\n");



}


	if(ren<=RENGLON || col<=COLUMNA)
        {

    LlenarMatriz(ren,col,matriz);

    printf("\n Matriz original \n");
	ImprimeMatriz(ren,col,matriz);


    printf("\n Matriz transpueta \n");
    ImprimeMatrizTranspuesta(ren,col,matriz);

	printf("\n \n \n");

    numero=SimetricaMatriz(ren,col,matriz);
	printf("\n");


	if(numero==1)
    {
        printf("\n es simetrica \n");

    }
    else
        printf("\n no es simetrica \n");

	}




  system("pause");




printf("\n");


	printf("\n");
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

int SimetricaMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;
	int contador=0;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{
        if(matrizdos[i][j]== matrizdos[j][i])

        contador=1;
        }

	    }


	    return contador;
/*

	 if(contador==1)
     {
         printf("La matriz no es simetrica");


     }
     	else{
	printf(" si es simetrica");
}*/
}



void ImprimeMatriz(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{
         printf("  ");
	   printf(" %3d ",matrizdos[i][j]);
        printf("  ");
	}

		printf("\n");
	}

}


void ImprimeMatrizTranspuesta(int num1,int num2,int matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num2;i++)
	{
	      for(j=0;j<num1;j++)
     	{
         printf("  ");
	   printf(" %3d ",matrizdos[j][i]);
        printf("  ");
	}

		printf("\n");
	}

}



