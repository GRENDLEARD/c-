#include <iostream>

using namespace std;

int main() {
    int segundos, minutos, horas, dias;

    cout << "Introduce una cantidad de segundos: ";
    cin >> segundos;



    segundos = segundos % (24 * 3600);   

    horas = segundos / 3600; 

    segundos = segundos % 3600;

    minutos = segundos / 60;  

    segundos = segundos % 60;


    cout << "Dias: " << dias << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;

    return 0;
}
