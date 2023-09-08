#include <iostream>

int main() {
    int numero;
    int contador = 0;

    std::cout << "Por favor ingrese un número entero: ";
    std::cin >> numero;

    // Manejo de números negativos
    if (numero < 0) {
        numero = -numero;
    }

    // Contar los dígitos utilizando un bucle
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    std::cout << "La cantidad de dígitos en el número es: " << contador << std::endl;

    return 0;
}