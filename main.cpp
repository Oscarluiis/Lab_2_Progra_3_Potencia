#include <iostream>
using namespace std;

/*
 * Ciclos for
 * Numeros  1        2       3       4       5       6       n   ...
 * Cuadrado 1        4       9       16      25      36      ... ...
 *
 *  ---- Prototipo de funciones
 *
 *      -> Tipo_de_retorno nombre_funcion (tipo_argumento_1, tipo_argumento_2);
 */

//double cuadrado(double, double);



int cuadrado(int);


int main() {

//Preguntar al usuario hasta donde calcular el cuadrado;

    int limite=0;

    cout << "Definir limite :";
    cin>>limite;

    for (int i = 1; i <= limite; ++i) {

        cout << cuadrado(i)<< " ";
    }


    return 0;

};

int cuadrado(int numero){
    return numero*numero;
}