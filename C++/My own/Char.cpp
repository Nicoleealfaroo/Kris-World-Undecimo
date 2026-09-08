//Estructura básica 
//Char guarda un solo caracter como una letra, numero o simbolo
#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingresá una letra: ";
    cin >> letra;

    // verificar si es vocal
    if (letra == 'a' || letra == 'e' || letra == 'i' ||
        letra == 'o' || letra == 'u') {
        cout << letra << " es una vocal." << '\n';

    // verificar si es mayúscula
    } else if (letra >= 'A' && letra <= 'Z') {
        cout << letra << " es una consonante mayúscula." << '\n';

    // cualquier otra cosa
    } else {
        cout << letra << " es una consonante minúscula." << '\n';
    }

    return 0;
}