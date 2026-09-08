//Estructura básica 
//Utilizar int para que los números sean enteros
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingresá dos números: ";
    cin >> a >> b;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicación: " << a * b << endl;
    cout << "División: " << a / b << endl;
    cout << "Residuo: " << a % b << endl;
    return 0;
}