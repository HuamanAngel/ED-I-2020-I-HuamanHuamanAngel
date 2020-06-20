//============================================================================
// Name        : Ejercicio1.cpp
// Author      : v
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class Ejercicio2{
private:
	int valAry[100];
	int valParAry[100];
	int sumaPar;
	int contPar;

public:
	Ejercicio2();
	void leerDatos();
	void procesasDatos();
	void mostrarDatos();
	void getSumaPar();
};

Ejercicio2::Ejercicio2(){
	for(int i=0;i<100;i++){
		valAry[i]=0 + rand()%(120-0);
	}
	sumaPar=0;
	contPar=0;
}

void Ejercicio2::getSumaPar(){
	printf("\nSuma de pares : %d\n",sumaPar);
}

void Ejercicio2::leerDatos(){
	int auxOpc;
	printf("Desea insertar 100 numeros enteros?\n");
	printf("(0)Cancelar    (1)continuar\n");
	fflush(stdout);
	scanf("%d",&auxOpc);


	printf("Inserte los numeros\n");
	fflush(stdout);

	if(auxOpc==1){
		for(int i=0;i<100;i++){

			scanf("%d",&valAry[i]);
		}
	}else{
		for(int i=0;i<100;i++){
			valAry[i]=0;
		}
	}
	fflush(stdout);

}

void Ejercicio2::procesasDatos(){
	for(int i=0;i<100;i++){
		if(valAry[i]%2==0){
			valParAry[contPar]=valAry[i];
			contPar++;
			sumaPar+=valAry[i];
		}
	}
}

void Ejercicio2::mostrarDatos(){
	printf("Todo los numeros \n");
	for(int i=0;i<100;i++){
		printf("%d ",valAry[i]);

	}
	printf("\nNumero pares \n");
	for(int i=0;i<contPar;i++){
		printf("%d ",valParAry[i]);
	}
	printf("\nSuma de pares : %d\n",sumaPar);


}

int main(){
	Ejercicio2 sol2=Ejercicio2();
	printf("EJERCICIO 2 \n");
	sol2.procesasDatos();
	sol2.mostrarDatos();
	sol2.leerDatos();
	sol2.procesasDatos();
	sol2.getSumaPar();

}
