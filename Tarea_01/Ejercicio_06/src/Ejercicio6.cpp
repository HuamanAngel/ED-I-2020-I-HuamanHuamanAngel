//============================================================================
// Name        : Ejercicio6.cpp
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
void addMat(float a[N][M],float b[N][M],float res[N][M],int fil,int col);
void sixDibCuadrado(int fil,int col);




int main() {
	//Ejercicio 6 //

	int fil;
	printf("Inserte el orden de la matriz\n");
	fflush(stdout);
	scanf("%d",&fil);
	printf("\nMatriz cuadrada %d x %d :\n",fil,fil);
	sixDibCuadrado(fil,fil);





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
void addMat(float a[N][M],float b[N][M],float res[N][M],int fil,int col)
{
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			*(*(res+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
		}
	}

}


void sixDibCuadrado(int fil,int col){
	char sixCuad[N][M];
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			sixCuad[i][j]='*';
			printf("%c",sixCuad[i][j]);

		}
		printf("\n");
	}
}
