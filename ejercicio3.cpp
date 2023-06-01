#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

void ejercicio3()
{
    /*Ejercicio 3: Desarrolle las siguientes operaciones para el Manejo de Cadenas:
  1-Insertar el contenido en las cadenas.
  2-Concatenar el nombre completo en cadena5.
  3-Convertir cadena5 a mayusculas.
  4-Convertir cadena5 a minusculas.
  5-Calcular la longitud de cadena5.
  6-Extraer el primer apellido de la cadena5.*/

  char cadena1[10], cadena2[10], cadena3[10], cadena4[10], cadena5[50], espacio[] = " ";

    cout<<"Ingrese el primer nombre: ";
    cin>>cadena1;

    cout<<"Ingrese el segundo nombre: ";
    cin>>cadena2;

    cout<<"Ingrese el primer apellido: ";
    cin>>cadena3;

    cout<<"Ingrese el segundo apellido: ";
    cin>>cadena4;

    strcpy(cadena5, cadena1);
    strcat(cadena5, espacio);
    strcat(cadena5, cadena2);
    strcat(cadena5, espacio);
    strcat(cadena5, cadena3);
    strcat(cadena5, espacio);
    strcat(cadena5, cadena4);

    cout<<cadena5<<endl;

	cout<<"\nCadena 5 convertida a mayuscula: "<<strupr(cadena5)<<endl;

	cout<<"\nCadena 5 convertida a minuscula: "<<strlwr(cadena5)<<endl;

	cout << "\nLa longitud de la cadena5 es: " << strlen(cadena5);

    char *c = strstr(cadena5, "cardenas");
    if (c)
        cout<<"\n\nEl apellido \"Cardenas\" se encuentra en la posicion "<<(c-cadena5)+1;
    else
        cout<<"\n\nEl apellido Cardenas no existe en esta cadena.\n";

    system("pause");
    system("cls");

    getchar();
}
