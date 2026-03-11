#include <iostream>
#include <string>
using namespace std;

int main () {
int edad;
cin >> edad;
string día;
cin >> día;
const int precioA = 2500;
const int precioB = 4000;
const int precioC = 2000;
int recargo;

if (edad < 12){ 
    cout << "Categoría: Niño" << '/n';
    cout << "Precio base: 2500" << '/n'
}

if (12 <= edad && edad >= 64) {
    cout << "Categoría: Adulto" << '/n';
    cout << "Precio base: 4000" << '/n';
}

if (edad >= 65) {
    cout << "Categoría: Adulto mayor" << '/n';
    cout << "Precio base: 2000" << '/n';
}

recargo = (precioA) * (20) / (100);

recargo = (precioB) * (20) / (100);

recargo = (precioC) * (20) / (100);

return 0;
}