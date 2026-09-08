#include <iostream>
#include <string>
using namespace std;

int main() {
//Las cositas
    int N, Opción, Turbinas, Capacidad, MW;

//Rango de N 
    if (N >= 1 && N <= 10);

//El arreglo de las turbinas
    for (int i = 0; i < 10; i++) {
//        cin >> Turbinas[i];
    }

//Aumentar
    string Aumenta;
    if (Turbinas +  MW > Capacidad) {
        cout << "Límite excedido" << endl;
    } if (Turbinas = MW < Capacidad) {
        Turbinas + MW;
    }

//Reducir
    string Reduce;
    if (Turbinas + MW < 0) {
        cout << "Turbina " << Turbinas << "apagada" << endl;
    } if (Turbinas + MW > 0) {
        Turbinas - MW;
    }

//Consultar
    
    
//Total
    

//Mayor aporte
    

//El menú 
    cout << "N: ";
    cin >> N;
    cout << "Capacidad máxima (MW): ";
    cin >> Capacidad;
    cout << "--- Sistema de Control ---"<< endl;
    cout << "1. Aumentar generación" << endl;
    cout << "2. Reducir generación" << endl;
    cout << "3. Consultar turbina" << endl;
    cout << "4. Generación total de la planta" << endl;
    cout << "5. Turbina con mayor aporte" << endl;
    cout << "6. Salir" << endl;
    cout << "La opción: ";
    cin >> Opción;
    cout << "La turbina: ";
    cin >> Turbinas;

    return 0;
}