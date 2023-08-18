#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese el coeficiente 'a': ";
    cin >> a;

    cout << "Ingrese el coeficiente 'b': ";
    cin >> b;

    cout << "Ingrese el coeficiente 'c': ";
    cin >> c;

    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son reales y diferentes:" << endl;
        cout << "x1 = " << raiz1 << endl;
        cout << "x2 = " << raiz2 << endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        cout << "La solución es real y doble:" << endl;
        cout << "x = " << raiz << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las soluciones son complejas conjugadas:" << endl;
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
    }

    return 0;
}
