/* Guía de Ejercicios #1: Pilas y Colas

   Nombre: Mariano Javier Lacayo Peter

   Grupo: B257

   Profesor: César Marín López
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void ejercicio1(int x, int xd, int i, int d, int a, float promedio);
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();

int main()
{
    int q = 0, x, xd, i, d, a;
    float promedio;
    do{
    cout<<"1. Ejercicio 1\n2. Ejercicio 2\n3. Ejercicio 3\n4. Ejercicio 4\n5. Ejercicio 5\n6. Ejercicio 6"<<endl;
    cout<<"\nA donde desea ir? ";
    cin>>q;

    switch(q){
        case 1:system("cls");
        ejercicio1(x, xd, i, d, a, promedio);
        break;

        case 2: system("cls");
        ejercicio2();
        break;

        case 3: system("cls");
        ejercicio3();
        break;

    }
    }while(q != 7);
}
