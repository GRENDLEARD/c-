include <iostream>

int main() {
    int numero, suma = 0;

    std::cout << "Por favor ingrese un número entero: ";
    std::cin >> numero;

    // Asegurarse de que el número sea positivo
    if (numero < 0) {
        numero = -numero;
    }

    while (numero > 0) {
        suma += numero % 10; // Obtener el último dígito y sumarlo
        numero /= 10; // Eliminar el último dígito
    }

    std::cout << "La suma de los dígitos es: " << suma << std::endl;

    return 0;
}