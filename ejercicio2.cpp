#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void ejercicio2()
{
    /*Ejercicio 2: Una empresa de venta de productos por correo, desea realizar su estadística de las
ventas realizadas por vendedor en el tercer trimestre del año 2021 (total de ventas por
vendedor y promedio de ventas trimestral). Recordar que son arreglos paralelos.*/

    int media, ventas[3][4];
    char vend[4][20];

    cout<<"Ingrese el nombre del primer vendedor: ";
    cin>>vend[0];

    cout<<"Ingrese sus ventas realizadas en julio: ";
    cin>>ventas[0][0];

    cout<<"Ingrese sus ventas realizadas en agosto: ";
    cin>>ventas[1][0];

    cout<<"Ingrese sus ventas realizadas en septiembre: ";
    cin>>ventas[2][0];

    ventas[3][0] = ventas[0][0] + ventas[1][0] + ventas[2][0];

    cout<<"Su total de ventas es de: "<<ventas[3][0]<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"\nIngrese el nombre del segundo vendedor: ";
    cin>>vend[1];

    cout<<"Ingrese sus ventas realizadas en julio: ";
    cin>>ventas[0][1];

    cout<<"Ingrese sus ventas realizadas en agosto: ";
    cin>>ventas[1][1];

    cout<<"Ingrese sus ventas realizadas en septiembre: ";
    cin>>ventas[2][1];

    ventas[3][1] = ventas[0][1] + ventas[1][1] + ventas[2][1];

    cout<<"Su total de ventas es de: "<<ventas[3][1]<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"\nIngrese el nombre del tercer vendedor: ";
    cin>>vend[2];

    cout<<"Ingrese sus ventas realizadas en julio: ";
    cin>>ventas[0][2];

    cout<<"Ingrese sus ventas realizadas en agosto: ";
    cin>>ventas[1][2];

    cout<<"Ingrese sus ventas realizadas en septiembre: ";
    cin>>ventas[2][2];

    ventas[3][2] = ventas[0][2] + ventas[1][2] + ventas[2][2];

    cout<<"Su total de ventas es de: "<<ventas[3][2]<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"\nIngrese el nombre del cuarto vendedor: ";
    cin>>vend[3];

    cout<<"Ingrese sus ventas realizadas en julio: ";
    cin>>ventas[0][3];

    cout<<"Ingrese sus ventas realizadas en agosto: ";
    cin>>ventas[1][3];

    cout<<"Ingrese sus ventas realizadas en septiembre: ";
    cin>>ventas[2][3];

    ventas[3][3] = ventas[0][3] + ventas[1][3] + ventas[2][3];

    cout<<"Su total de ventas es de: "<<ventas[3][3]<<endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"\nIngrese el nombre del quinto vendedor: ";
    cin>>vend[4];

    cout<<"Ingrese sus ventas realizadas en julio: ";
    cin>>ventas[0][4];

    cout<<"Ingrese sus ventas realizadas en agosto: ";
    cin>>ventas[1][4];

    cout<<"Ingrese sus ventas realizadas en septiembre: ";
    cin>>ventas[2][4];

    ventas[3][4] = ventas[0][4] + ventas[1][4] + ventas[2][4];

    cout<<"Su total de ventas es de: "<<ventas[3][4]<<endl;

    media = (ventas[3][0] + ventas[3][1] + ventas[3][2] + ventas[3][3] + ventas[3][4])/5;

    cout<<"\n\t\tEstadistica de los vendedores"<<endl;

    cout<<"Vendedor\ttotal"<<endl;
    cout<<"\n"<<vend[0]<<"\t\t"<<ventas[3][0]<<endl;
    cout<<"\n"<<vend[1]<<"\t\t"<<ventas[3][1]<<endl;
    cout<<"\n"<<vend[2]<<"\t\t"<<ventas[3][2]<<endl;
    cout<<"\n"<<vend[3]<<"\t\t"<<ventas[3][3]<<endl;
    cout<<"\n"<<vend[4]<<"\t\t"<<ventas[3][4]<<endl;

    cout<<"\nEl promedio es de: "<<media<<endl;

    system("pause");
    system("cls");
}
