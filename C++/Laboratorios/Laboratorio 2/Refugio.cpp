#include <iostream>
#include <string>
using namespace std;

class Mascota {
protected:
    string Nombre;
    int Edad;

public:
    Mascota(string Nombre, int Edad) {
        this -> Nombre = Nombre;
        this -> Edad = Edad;
    }

    void Imprimir() {
        cout << "Nombre: " << this -> Nombre << ", Edad: " << this -> Edad;
    }
};

class Perro : public Mascota {
private:
    string Raza;

public:
    Perro(string Nombre, int Edad, string Raza) : Mascota(Nombre, Edad) {
        this -> Raza = Raza;
    }

    void Imprimir() {
        Mascota::Imprimir();
        cout << ", Raza: " << this -> Raza << endl;
    }
};

class Gato : public Mascota {
private:
    int ViveEnInterior; 

public:
    Gato(string Nombre, int Edad, int ViveEnInterior) : Mascota(Nombre, Edad) {
        this -> ViveEnInterior = ViveEnInterior;
    }

    void Imprimir() {
        Mascota::Imprimir(); 
        if (this -> ViveEnInterior == 1) {
            cout << ", Vive en interior: Si" << endl;
        } else {
            cout << ", Vive en interior: No" << endl;
        }
    }
};

int main() {
    int N;
    if (!(cin >> N)) return 0; 

    for (int i = 0; i < N; i++) {
        string Tipo;
        cin >> Tipo;

        if (Tipo == "perro") {
            string Nombre, Raza;
            int Edad;
            cin >> Nombre >> Edad >> Raza;

            Perro P(Nombre, Edad, Raza);
            P.Imprimir();
        } 
        else if (Tipo == "gato") {
            string Nombre;
            int Edad, ViveEnInterior;
            cin >> Nombre >> Edad >> ViveEnInterior;

            Gato G(Nombre, Edad, ViveEnInterior);
            G.Imprimir();
        }
    }

    return 0;
}