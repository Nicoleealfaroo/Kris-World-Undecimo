#include <iostream>
#include <string>
using namespace std;

int main() {
    double t;
    cin >> t;
    double y;
    cin >> y;
    const double GRAVEDAD = 9.8;
    double h;
    
    string tiempo;
    if (t < 0) {
        cout << "El tiempo debe ser positivo" << endl;
    } 

    string ventana;
    if (y < 0) {
        cout << "La altura de la ventana debe ser positiva" << endl;
    } 

    string altura;
    if (h <= 0) {
        cout << "Los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventana" << endl;
    }
    
    h = (0.5)*(GRAVEDAD)*(t)*(t);

    cout << "H = " << h << "m" << endl;

    return 0;
}
