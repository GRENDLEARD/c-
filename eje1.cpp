#include <iostream>
#include <string>

int main() {
    // Declara un arreglo para almacenar los números telefónicos de 5 integrantes
    std::string telefonos[5];

    // Solicita los números telefónicos y los almacena en el arreglo
    for (int i = 0; i < 5; i++) {
        std::cout << "Introduce el número telefónico del integrante " << (i + 1) << ": ";
        std::cin >> telefonos[i];
    }

    // Pide al usuario que elija un número de integrante para buscar
    int numeroIntegrante;
    std::cout << "Ingresa el número de integrante que deseas buscar (1-5): ";
    std::cin >> numeroIntegrante;

    // Verifica que el número de integrante esté en el rango válido
    if (numeroIntegrante >= 1 && numeroIntegrante <= 5) {
        // Imprime el número telefónico del integrante seleccionado
        std::cout << "Número telefónico del integrante " << numeroIntegrante << ": " << telefonos[numeroIntegrante - 1] << std::endl;
    } else {
        std::cout << "Número de integrante no válido. Debe estar en el rango 1-5." << std::endl;
    }

    return 0;
}