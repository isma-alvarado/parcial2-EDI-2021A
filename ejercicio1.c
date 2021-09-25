#include<stdio.h>
#define RENGLON 20
#define COLUMNA 20


void LlenarMatriz(int num1,int num2,float matrizdos[RENGLON][COLUMNA]);
void ImprimeMatriz(int num1,int num2,float matrizdos[RENGLON][COLUMNA]);
void SumaColumna(int num1,int num2,float matrizdos[RENGLON][COLUMNA]);
//void SumaRenglon(int num1,int num2,float matrizdos[RENGLON][COLUMNA]);

int main()
{
	int ren,col;
	float matriz[RENGLON][COLUMNA];

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
	SumaColumna(ren,col,matriz);
	// SumaRenglon(ren,col,matriz);
	}
  system("pause");
}



void LlenarMatriz(int num1,int num2,float matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{
        printf("Dime el dato de la posicion [%d] [%d]: ",i+1,j+1);
        scanf("%f",&matrizdos[i][j]);
        printf("\n");

     	}

	}
	 printf("\n");
	}







void ImprimeMatriz(int num1,int num2,float matrizdos[RENGLON][COLUMNA])
{

	int i , j;

	for(i=0;i<num1;i++)
	{
	      for(j=0;j<num2;j++)
     	{

	   printf("    %.2f    ",matrizdos[i][j]);


	}

		printf("\n");
	}

}



void SumaColumna(int num1,int num2,float matrizdos[RENGLON][COLUMNA])
{
float promedio=0;
   int i , j;

	for(j=0;j<num2;j++)
	{
	    float suma=0;
	      for(i=0;i<num1;i++)
     	{
     	    suma=suma + matrizdos[i][j];


	}

	promedio=suma/i;



	printf("La suma de la Columna [%d] es %.2f: ",j+1,suma);

	printf("\n");
    printf("El promedio del Columna [%d] es %.2f: ",j+1,promedio);
    printf("\n");
    printf("\n");



}


}



/*


void SumaRenglon(int num1,int num2,float matrizdos[RENGLON][COLUMNA])
{
float promedio=0;
   int i , j;

	for(i=0;i<num1;i++)
	{
	    float suma=0;
	      for(j=0;j<num2;j++)
     	{
     	    suma=suma + matrizdos[i][j];


	}

	promedio=suma/j;



	printf("La suma del Renglon [%d] es %.2f: ",i+1,suma);
	printf("\n");

    printf("El promedio del Renglon [%d] es %.2f: ",i+1,promedio);
    printf("\n");
    printf("\n");



}


}

*/



