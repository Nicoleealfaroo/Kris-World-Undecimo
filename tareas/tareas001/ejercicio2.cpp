#include <iostream>
#include <string>
using namespace std;

int main() {
    double v;
    cin >> v;
    double T;
    cin >> T;
    double vs;
    double M;
    const double x = 331;
    const double y = 0.6;
    const double z = -273.15;

    if (M < 0.8){
        cout << "Regimen: Subsónico" << endl;
        return 0;
    }

    if (M >= 0.8 && M < 1.2) {
        cout << "Regimen: Transónico" << endl;
        return 0;
    }

    if (M >= 1.2 && M < 0.5) {
        cout << "Regimen: Supersónico" << endl;
        return 0;
    }

    if (M >= 5.0) {
        cout << "Regimen: Hipersónico" << endl;
        return 0;
    }

    string velocidad; 
    if (v < 0) {
        cout << "La velocidad no puede ser negativa" << endl;
        return 0;
    } 

    string temperatura;
    if (T < z) {
        cout << "La temperatura no puede ser menor o igual al cero absoluto" << endl;
        return 0;
    }

    string Mach;
    vs = (x) + (y) * (T);
    M = (v) / (vs);

    cout << "vs = " << vs << "m/s" << endl;
    cout << "M = " << M << endl;

    return 0;
}