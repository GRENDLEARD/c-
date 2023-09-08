#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int numeroAleatorio = std::rand() % 100 + 1;
    int intentoUsuario, intentos = 0;

    std::cout << "Adivina el número (entre 1 y 100): ";

    do {
        std::cin >> intentoUsuario;
        intentos++;

        if (intentoUsuario < numeroAleatorio) {
            std::cout << "El número es mayor. Intenta de nuevo: ";
        } else if (intentoUsuario > numeroAleatorio) {
            std::cout << "El número es menor. Intenta de nuevo: ";
        }
    } while (intentoUsuario != numeroAleatorio);

    std::cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << std::endl;

    return 0;
}