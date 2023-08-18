#include <iostream>
#include <cmath> // Incluir la librería para funciones matemáticas

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    // Solicitar los valores de los catetos al usuario
    cout << "Ingresa el valor del primer cateto: ";
    cin >> cateto1;

    cout << "Ingresa el valor del segundo cateto: ";
    cin >> cateto2;

    // Calcular la hipotenusa usando el teorema de Pitágoras
    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    // Mostrar el resultado
    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}
