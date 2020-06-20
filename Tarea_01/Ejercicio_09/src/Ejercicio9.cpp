//============================================================================
// Name        : Ejercicio9.cpp
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
float proDiagMat(float a[N][M],int fil,int col);

int main() {
	float a[N][M];
	int fil,col;
	printf("Insertar el filas y columnas de la matriz \n");

	fflush(stdout);
	scanf("%d %d",&fil,&col);
	printf("Insertar la matriz \n");
	inputMat(a,fil,col);
	printf("Matriz insertada \n");
	printMat(a,fil,col);
	printf("El producto de la diagonal es : %.2f",proDiagMat(a,fil,col));

	return 0;
}

float proDiagMat(float a[N][M],int fil,int col){
	float prod = 1;
	for(int i=0;i<fil;i++){
		for(int j=0;j<col;j++){
			if(i==j){
				prod=prod*a[i][j];
			}
		}
	}
	return prod;
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


