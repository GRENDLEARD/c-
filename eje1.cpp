#include <iostream>

int main() {
    double base, resultado = 1;
    int exponente;

    std::cout << "Ingrese la base: ";
    std::cin >> base;

    std::cout << "Ingrese el exponente (entero positivo): ";
    std::cin >> exponente;

    if (exponente < 0) {
        std::cout << "El exponente debe ser un entero positivo." << std::endl;
        return 1; // Salir del programa con un código de error
    }

    for (int i = 0; i < exponente; i++) {
        resultado *= base; // Multiplicar la base por sí misma 'exponente' veces
    }

    std::cout << "El resultado de " << base << " elevado a la " << exponente << " es: " << resultado << std::endl;

    return 0;
}