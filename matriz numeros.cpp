#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;


int numeroFilas = 0, numeroColumnas = 0;

int main(){	
	
	printf("Ingrese el numero de filas de la matriz");
	scanf("%d",&numeroFilas);
	printf("Ingrese el numero de columnas de la matriz");
	scanf("%d",&numeroColumnas);
	
	int edades[numeroFilas][numeroColumnas] = {};
	
	//tamañp de las filas
	int filas = (sizeof(edades)/sizeof(edades[0]));
	int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
	
	printf("\n \n");
	printf("Numero de columnas: %d",columnas);
	printf("\n \n");
	printf("Numero de filas: %d",filas);
	printf("\n \n");
	
	//llenando matriz
	for(int i=0; i<numeroFilas; i++){
		for(int j=0; j<numeroColumnas; j++){			
			printf ("Dame el numero de la posicion [%i][%i]", i, j); //(i+1) (j+1) si quieres
			scanf ("%i", &edades [i][j]);
		}
	}
	
	//Imprimiendo la matriz
	cout << "La matriz 1 es: "<<"\n"<<endl;
	for (size_t i{0};i<numeroFilas;i++){
		for (size_t j{0};j<numeroColumnas;j++){
			cout<<" "<<edades[i][j];
		}
		cout<<endl;
	}	
	
	//Imprimiendo positivos de un digito
	cout << "Numeros positivos de un digito: "<<"\n"<<endl;
	for (size_t i{0};i<numeroFilas;i++){
		for (size_t j{0};j<numeroColumnas;j++){
			//cout<<" "<<edades[i][j];
			int numero = edades[i][j];
			if(numero > 0 && numero < 10){
				cout<<" "<<numero;
			}
		}
		cout<<endl;
	}
	
	//Imprimiendo negativos de un digito
	cout << "Numeros negativos de un digito: "<<"\n"<<endl;
	for (size_t i{0};i<numeroFilas;i++){
		for (size_t j{0};j<numeroColumnas;j++){
			//cout<<" "<<edades[i][j];
			int numero = edades[i][j];
			if(numero < 0 && numero < 10){
				cout<<" "<<numero;
			}
		}
		cout<<endl;
	}
	
	//Imprimiendo positivos de un digito
	cout << "Numeros positivos de dos digito: "<<"\n"<<endl;
	for (size_t i{0};i<numeroFilas;i++){
		for (size_t j{0};j<numeroColumnas;j++){
			//cout<<" "<<edades[i][j];
			int numero = edades[i][j];
			if(numero > 0 && numero < 10){
				cout<<" "<<numero;
			}
		}
		cout<<endl;
	}
	
	//Imprimiendo negativos de un digito
	cout << "Numeros negativos de dos digito: "<<"\n"<<endl;
	for (size_t i{0};i<numeroFilas;i++){
		for (size_t j{0};j<numeroColumnas;j++){
			//cout<<" "<<edades[i][j];
			int numero = edades[i][j];
			if(numero < 0 && numero >= 10){
				cout<<" "<<numero;
			}
		}
		cout<<endl;
	}
	
	return 0;
	
	//for (int i=0;) 
}


