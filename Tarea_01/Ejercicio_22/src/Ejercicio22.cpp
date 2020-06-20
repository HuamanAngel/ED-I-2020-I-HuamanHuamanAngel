//============================================================================
// Name        : Ejercicio22.cpp
// Author      : v
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<stdio.h>
#define N 20
#define M 20
void inputMat(float a[N][M],int &fil,int &col);
void printMat(float a[N][M],int fil,int col);


int main() {
	int fil,col;
	float matA[N][M];
	float (*punt1)[M];//Declaracion de puntero para recorrer el array

	punt1=matA;//Puntero a array bidimensional

	printf("Inserte el numero de filas y columnas \n");
	fflush(stdout);
	scanf("%d %d",&fil,&col);
	printf("Inserte la matriz %dx%d \n",fil,col);
	inputMat(matA,fil,col);
	printf("\nMatriz sin puntero\n");

	printMat(matA,fil,col);

	printf("\nMatriz con puntero \n");



	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			printf("%.2f ",*(*(punt1+i)+j));
		}
		printf("\n");
	}

	return 0;
}

void inputMat(float a[N][M],int &fil,int &col)
{
	fflush(stdout);
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			scanf("%f",(*(a+i)+j));
		}
	}
}
void printMat(float a[N][M],int fil,int col)
{
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			printf("%.2f ",*(*(a+i)+j));
		}
		printf("\n");
	}

}
