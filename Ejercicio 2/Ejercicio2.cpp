//
// Created by UPSALAB on 17/2/2024.
//

#include <iostream>
#include "Ejercicio2.h"

void Ejercicio2::Swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void Ejercicio2::Permutar(char *arreglo, int comienzo, int fin) {
    if (comienzo == fin)
    {
        for (int i = 0; i <= fin; i++){
            std::cout<<arreglo[i];
        }
        std::cout<<"\n";
    }
    else
    {
        for (int i = comienzo; i <= fin; i++)
        {
            Swap(arreglo[comienzo], arreglo[i]);
            Permutar(arreglo, comienzo + 1, fin);
            Swap(arreglo[comienzo], arreglo[i]);
        }
    }
}

void Ejercicio2::Execute() {
    int size;
    std::cout<<"Digite el size del arreglo de caracteres: ";
    std::cin>>size;

    char *arreglo = new char[size];

    std::cout<<"Introduzca los " << size << " caracteres: ";
    for (int i = 0; i < size; i++)
    {
        std::cin>>arreglo[i];
    }

    std::cout<<"Las permutaciones del conjunto de caracteres introducido es: \n";
    Permutar(arreglo, 0, size - 1);


}