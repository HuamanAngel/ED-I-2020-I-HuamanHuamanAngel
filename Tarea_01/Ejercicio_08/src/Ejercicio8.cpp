//============================================================================
// Name        : Ejercicio8.cpp
// Author      : v
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<stdio.h>
#define N 3
#define M 3
void inputMat(float a[N][M]);
void printMat(float a[N][M]);
void addMat(float a[N][M],float b[N][M],float res[N][M]);

int main() {
	float a[N][M],b[N][M],c[N][M];
	printf("Inserte la matriz 1 3x3 \n");
	inputMat(a);
	printf("Inserte los datos de la matriz 2 3x3 \n");
	inputMat(b);
	addMat(a,b,c);
	printf("Suma de matrices \n");
	printMat(c);


	return 0;
}

void inputMat(float a[N][M])
{
	fflush(stdout);
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			scanf("%f",(*(a+i)+j));
		}
	}
}
void printMat(float a[N][M])
{
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			printf("%.2f ",*(*(a+i)+j));
		}
		printf("\n");
	}

}
void addMat(float a[N][M],float b[N][M],float res[N][M])
{
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			*(*(res+i)+j)=*(*(a+i)+j) + *(*(b+i)+j);
		}
	}

}



