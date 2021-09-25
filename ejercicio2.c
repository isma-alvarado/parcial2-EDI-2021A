#include<stdio.h>
#include<stdlib.h>
#define Maximo 40

void LlenarMatriz(int num, int matrizdos[Maximo][Maximo]);


void ImprimeMatriz(int num,int matrizdos[Maximo][Maximo]);






int main()
{
	int tam;
	int matriz[Maximo][Maximo];
	printf("Dime el tamanio de la matriz: \n");
	scanf("%d",&tam);
    printf("\n");

	if(tam>Maximo)

	{
		printf("\n");
	printf("Demasiado grande, dime un numero mas chico");
    	printf("\n");

	}
	else {

    LlenarMatriz(tam,matriz);
	ImprimeMatriz(tam,matriz);
		printf("\n");
	}
  system("pause");
}



void LlenarMatriz(int num,int matrizdos[Maximo][Maximo])
{

	int i , j;

	for(i=0;i<num;i++)
	{
	      for(j=0;j<num;j++)
     	{
		 if (i == j)
		 {
		 matrizdos[i][j] = 1;
		 }
		 else  {

		 matrizdos[i][j] = 0;

     	}

	}
	}
	}




void ImprimeMatriz(int num,int matrizdos[Maximo][Maximo])
{

	int i , j;

	for(i=0;i<num;i++)
	{
	      for(j=0;j<num;j++)
     	{

	   printf(" %d ",matrizdos[i][j]);




	}

		printf("\n");
	}
}








