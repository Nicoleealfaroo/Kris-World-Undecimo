//Estructura básica
//Long se utiliza para números súper grandes
#include <iostream>
using namespace std;

int main() {
    long long n;

    cout << "Ingresá un número grande: ";
    cin >> n;

    long long cuadrado = n * n;
    long long cubo = n * n * n;

    cout << "Cuadrado: " << cuadrado << '\n';
    cout << "Cubo: " << cubo << '\n';

    return 0;
}