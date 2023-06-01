#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void ejercicio1(int x, int xd, int i, int d, int a, float promedio)
{
/*Ejercicio 1: Se tienen N temperaturas almacenadas en un arreglo. Se desea calcular la media y
obtener el número de temperaturas mayores o iguales que la media.*/

    int N = 10;
    float temp[N];

    cout<<"Cuantas temperaturas desea ingresar: ";
    cin>>x;

    for(a=0; a<x; a++)
    {
        if (x>N)
            cout<<"Ingrese un numero igual a 10 o menor"<<endl;
        else
        {
            cout<<"Ingrese la temperatura: ";
            cin>>temp[a];
            xd = xd + temp[a];
        }
    }

    promedio = xd/x;

    cout<<"La temperatura media es de: "<<promedio<<endl;

    for(d=0; d<x; d++)
    {
        if(temp[d] >= promedio)
            i = i + 1;
    }

    cout<<"El numero de temperaturas mayores o iguales al promedio son: "<<i<<endl;

    system("pause");
    system("cls");
}
