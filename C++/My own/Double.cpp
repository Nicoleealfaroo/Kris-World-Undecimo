//Estructura básica 
//Double es para que los números tengan decimales
#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, nota3;
    cout << "Ingresá tres notas: ";
    cin >> nota1 >> nota2 >> nota3;

    double promedio = (nota1 + nota2 + nota3) / 3.0;
    cout << "Tu promedio es: " << promedio << endl;

    return 0;
}