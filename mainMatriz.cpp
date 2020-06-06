/*
 *                                UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
 *                                        INGENIERIA DE SOFTWARE
 * Autor: Alexis Altamirano - Erick Santamaria
 * NRC: 6396
 * Fecha de creacion: 04/junio/2020
 * Fecha de modificacion: 05/Junio/2020
 */
#include <iostream>s
#include "Ingreso.h"
#include "Matriz.h"

int main() {
	Ingreso ingreso;
	int n_Fila = 0, n_Columna = 0, exponente = 0, d;
	bool bandera_F = false, bandera_C = false, bandera = false, bandera_E = false;
	
	/*printf("\nIngrese la dimension de la matriz: ");
	scanf("%d",&d);
	printf("\n");*/
	while (!bandera) {
		//iNGRESO DE FILA Y COLUMNA MAYORES QUE 0 Y MENORES QUE 10
		while (!bandera_F) {
			n_Fila = atoi(ingreso.ingresar("Ingrese valor entero de fila: ").c_str());
			if (n_Fila > 0 && n_Fila < 10) {
				bandera_F = true;
			}
		}
		while (!bandera_C) {
			n_Columna = atoi(ingreso.ingresar("Ingrese valor entero de columna: ").c_str());
			if (n_Columna > 0 && n_Columna < 10) {
				bandera_C = true;
			}
		}

		//VERIFICACION DE MATRIZ CUADRADA
		if (n_Fila != n_Columna) {
			std::cout << "La matriz tiene que ser cuadrada para este proceso" << std::endl;
		}
		else {
			bandera = true;
		}
	}

	Matriz matriz(n_Fila, n_Columna);
	matriz.crearMatriz();
	matriz.encerar();
	cout<<"Ingrese los valores de la matriz:"<<endl;
	matriz.llenarMatriz();

	std::cout << "\nLa Matriz ingresada es: " << std::endl;
	matriz.imprimirMatriz();

	while (!bandera_E) {
		exponente = atoi(ingreso.ingresar("Ingrese valor entero para exponente: ").c_str());
		if (exponente > 0 && exponente < 10) {
			bandera_E = true;
		}
	}

	matriz.multiplicarMatriz(exponente);
	std::cout << "\nMatriz Elevada a la potencia n es:" << std::endl;
	matriz.imprimirMatriz();

	return 0;
}
