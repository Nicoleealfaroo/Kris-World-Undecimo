//Estructura básica
//Bool solo puede tener dos valores posibles true o false
#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Ingresá tu nota: ";
    cin >> nota;

    // bool que guarda el resultado de una comparación
    bool aprobado = (nota >= 70);
    bool excelente = (nota >= 90);
    bool necesita_ampliacion = (nota >= 60 && nota < 70);

    // usar los bool en condiciones
    if (excelente) {
        cout << "Nota excelente!" << '\n';
    } else if (aprobado) {
        cout << "Aprobado." << '\n';
    } else if (necesita_ampliacion) {
        cout << "Necesitás ampliación." << '\n';
    } else {
        cout << "Reprobado." << '\n';
    }

    // imprimir el valor del bool directamente
    cout << "¿Aprobado? " << aprobado << '\n';

    return 0;
}