//
// Created by UPSALAB on 17/2/2024.
//

#include "Ejercicio1.h"

int Ejercicio1::FactorialIterativo(int n) {
    int factorial = 1;
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;

    for (int i = 1; i <= n; i++){
        factorial = factorial * i;
    }
    return factorial;
}

int Ejercicio1::FactorialRecursivo(int n) {
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;

    return n * FactorialRecursivo(n-1);
}

void Ejercicio1::Execute() {
    int numeroInput, opcion;
    std::cout<<"Digite el numero para el cual desea calcular el factorial: ";
    std::cin>>numeroInput;
    std::cout<<"Digite 1 para hacerlo de manera recursiva o 2 para hacerlo de manera iterativa: ";
    std::cin>>opcion;

    switch (opcion) {
        case 1:
            std::cout<<"Su factorial de manera recursiva es: "<<FactorialRecursivo(numeroInput);
            break;
        case 2:
            std::cout<<"\n De manera iterativa: "<<FactorialIterativo(numeroInput);
            break;
        default:
            std::cout<<"Opcion no valida, intente de nuevo.";
            break;
    }


}

