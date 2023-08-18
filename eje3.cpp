#include <iostream>

int main() {
    double tarifaHoraria;
    int horasDiarias;


    std::cout << "Ingrese la tarifa horaria: ";
    std::cin >> tarifaHoraria;

    std::cout << "Ingrese el número de horas trabajadas diariamente: ";
    std::cin >> horasDiarias;

    double salarioSemanal = tarifaHoraria * horasDiarias; 

   
    std::cout << "El salario semanal del trabajador es: " << salarioSemanal << " dinero." << std::endl;

    return 0;
}
