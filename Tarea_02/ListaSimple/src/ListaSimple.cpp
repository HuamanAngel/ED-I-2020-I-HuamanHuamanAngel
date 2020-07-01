//============================================================================
// Name        : ListaSimple.cpp
// Author      : v
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>

#define MAX 100
#define ERRORLLENA -1
#define ERRORVACIA -2
#define ERRORPOS -3

struct ListaSimple{
	int datos[MAX];
	int ultimo;
};


void iniLs(ListaSimple *l1){
	l1->ultimo=-1;
}

void desLs(ListaSimple *l1){
	l1->ultimo=-1;
}


int adiLs(ListaSimple *li,int dato){

	if(li->ultimo == MAX-1){
		return ERRORLLENA;
	}else{
		li->ultimo = li->ultimo+1;
		li->datos[li->ultimo]=dato;
		return li->ultimo;
	}

}

int adiLsPos(ListaSimple *li,int dato,int pos){
	int posaux;
	if(li->ultimo == MAX-1){
		return ERRORLLENA;
	}else{
		if(pos==li->ultimo+1 || pos==0){
			return ERRORPOS;
		}else{

		}
		li->ultimo=li->ultimo+1;
		posaux = li->ultimo;
		while(posaux>pos){
			li->datos[posaux] = li->datos[posaux-1];
			posaux=posaux-1;
		}
		li->datos[pos]=dato;
		return pos;
	}
}


int retLs(ListaSimple *l1){
	if(l1->ultimo ==-1){

		return ERRORVACIA;
	}else{
		l1->ultimo=l1->ultimo-1;
		return l1->datos[l1->ultimo+1];
	}
}

int retLsIni(ListaSimple *li){
	int pos, valor;
	if(li->ultimo ==-1){
		return ERRORVACIA;
	}else{
		li->ultimo = li->ultimo-1;
		valor = li->datos[0];
		pos = 0;
		while(pos <= li->ultimo){
			li->datos[pos]=li->datos[pos+1];
			pos = pos+1;
		}
		return valor;
	}
}

int retLsPos(ListaSimple *li,int posicion){
	int pos, valor;

	if(posicion > li->ultimo || posicion<0){
		return ERRORPOS;
	}else{

		if(li->ultimo ==-1){
			return ERRORVACIA;
		}else{

			li->ultimo=li->ultimo-1;
			valor = li->datos[posicion];
			pos = posicion;

			while(pos <= li->ultimo){
				li->datos[pos]=li->datos[pos+1];
				pos = pos+1;
			}
			return valor;
		}

	}

}

int iniShow(ListaSimple *li){
	return li->datos[0];
}

int finShow(ListaSimple *li){
	return li->datos[li->ultimo];
}

int posShow(ListaSimple *li,int pos){
	return li->datos[pos-1];
}

void allShow(ListaSimple *li){
	for(int i=0;i<=li->ultimo;i++){
		printf("%d \n",li->datos[i]);
	}
}
int main() {
	int opc;
	int valor;
	int pos;
	ListaSimple l1;
	bool over=false;
	iniLs(&l1);
	while(over==false){
		printf("\nInserte el numero de operacion a hacer \n");
		printf("(0)Salir     (1)Add     (2)Remove     (3)Show\n");
		fflush(stdout);
		scanf("%d",&opc);
		fflush(stdout);

		switch(opc){
		case 0:
			over=true;
			break;
		case 1:
			printf("\nInserte el numero de operacion a hacer \n");
			printf("(1)Add Al final     (2)Add por posicion\n");
			fflush(stdout);
			scanf("%d",&opc);
			fflush(stdout);

			printf("\nInserte el dato\n");
			fflush(stdout);
			scanf("%d",&valor);
			fflush(stdout);


			switch(opc){
				case 1:
					printf("\nSe agrego el valor en la posicion %d \n",adiLs(&l1,valor)+1);
					break;
				case 2:
					printf("\nInserte posicion\n");
					fflush(stdout);
					scanf("%d",&pos);
					fflush(stdout);
					if(pos>l1.ultimo || pos<0){
						printf("\nNo es posbile agregar en la posicion\n");

					}else{

						pos=pos-1;
						adiLsPos(&l1,valor,pos);

					}
					break;
			}

			break;
		case 2:
			if(l1.ultimo==-1){
				printf("\nNo se puede retirar porque no hay valores\n");
			}else{
				printf("\nInserte el numero de operacion a hacer \n");
				printf("(1)Remove Al inicio     (2)Remove al final     (3)Remove por posicion\n");
				fflush(stdout);
				scanf("%d",&opc);
				fflush(stdout);

				switch(opc){
				case 1:
					printf("\nSe retiro el numero %d\n",retLsIni(&l1));
					break;
				case 2:
					printf("\nSe retiro el numero %d\n",retLs(&l1));
					break;

				case 3:
					printf("\nInserte posicion\n");
					fflush(stdout);
					scanf("%d",&pos);
					fflush(stdout);
					pos = pos-1;
					printf("\nSe retiro el numero %d\n",retLsPos(&l1,pos));
					break;
				}

			}

			break;
		case 3:
			if(l1.ultimo==-1){
				printf("\nNo hay valores para mostrar\n");
			}else{
				printf("\nInserte el numero de operacion a hacer \n");
				printf("(1)Show Al inicio     (2)Show todos     (3)Show el final     (4)Show por posicion\n");
				fflush(stdout);
				scanf("%d",&opc);
				fflush(stdout);
				switch(opc){
				case 1:
					printf("\n Valor : %d \n",iniShow(&l1));
					break;
				case 2:
					allShow(&l1);
					break;
				case 3:
					printf("\n Valor : %d \n",finShow(&l1));
					break;
				case 4:
					printf("\nInserte posicion\n");
					fflush(stdout);
					scanf("%d",&pos);
					fflush(stdout);
					printf("\n Valor : %d \n",posShow(&l1,pos));

					break;

				}

			}

			break;
		}
	}


	return 0;

}
