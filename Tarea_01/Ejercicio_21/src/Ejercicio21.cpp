//============================================================================
// Name        : Ejercicio21.cpp
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

void numProMat(float a[N][M],int num,int fil,int col);


int main() {
	float matA[N][M],matB[N][M],matR[N][M];
	int ord;
	printf("Inserte el orden de ambas matrices :\n");
	fflush(stdout);
	scanf("%d",&ord);
	printf("Inserte la matriz A %dx%d\n",ord,ord);
	inputMat(matA,ord,ord);
	printf("Inserte la matriz A %dx%d\n",ord,ord);
	inputMat(matB,ord,ord);

	printf("Las matrices insertadas son : \n");
	printMat(matA,ord,ord);
	printf("\n");
	printMat(matB,ord,ord);
	printf("\n");
	numProMat(matA,2,ord,ord);
	numProMat(matB,3,ord,ord);

	printf("\nMatrices 2A y 3B\n");
	printMat(matA,ord,ord);
	printf("\n");
	printMat(matB,ord,ord);


	addMat(matA,matB,matR,ord,ord);
	printf("\nMatriz resultante\n");
	printMat(matR,ord,ord);


	return 0;
}

void numProMat(float a[N][M],int num,int fil,int col){

	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			*(*(a+i)+j)*=num;
		}
	}
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

