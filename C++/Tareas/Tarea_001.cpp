#include <iostream>
#include <vector>
#include <string>

using namespace std;

class EstacionMeteorologica {
private:
    string nombreEstacion;
    vector <double> lecturas;

public:
    EstacionMeteorologica() {
        this->nombreEstacion = "Estacion sin nombre";
    }

    EstacionMeteorologica(string nombreEstacion) {
        this->nombreEstacion = nombreEstacion; 
    }

    bool registrarLectura(double temperatura) {
        if (temperatura >= -50.0 && temperatura <= 60.0) {
            this->lecturas.push_back(temperatura);
            return true;
        }
        return false;
    }

    double promedio() {
        if (this->lecturas.empty()) {
            return 0.0;
        }
        
        double suma = 0.0;

        for (int i = 0; i < this->lecturas.size(); ++i) {
            suma += this->lecturas[i];
        }
        
        return suma / this->lecturas.size();
    }

    double maxima() {
        if (this->lecturas.empty()) {
            return 0.0;
        }
        
        double max_temp = this->lecturas[0];
        
        for (int i = 1; i < this->lecturas.size(); ++i) {
            if (this->lecturas[i] > max_temp) {
                max_temp = this->lecturas[i];
            }
        }
        
        return max_temp;
    }

    string getNombreEstacion() {
        return this->nombreEstacion;
    }

    int getCantidadLecturas() {
        return this->lecturas.size();
    }
};

int main() {
    string nombre;
    getline(cin, nombre);

    EstacionMeteorologica estacion(nombre);

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) {
        string comando;
        cin >> comando;

        if (comando == "registrar") {
            double temp;
            cin >> temp;
            if (estacion.registrarLectura(temp)) {
                cout << "Lectura registrada: " << temp << "\n";
            } else {
                cout << "Error: la temperatura debe estar entre -50 y 60.\n";
            }
        } 
        else if (comando == "promedio") {
            if (estacion.getCantidadLecturas() == 0) {
                cout << "Sin lecturas registradas.\n";
            } else {
                cout << "Promedio: " << estacion.promedio() << "\n";
            }
        } 
        else if (comando == "maxima") {
            if (estacion.getCantidadLecturas() == 0) {
                cout << "Sin lecturas registradas.\n";
            } else {
                cout << "Maxima: " << estacion.maxima() << "\n";
            }
        } 
        else if (comando == "cantidad") {
            cout << estacion.getNombreEstacion() << " - lecturas registradas: " 
                 << estacion.getCantidadLecturas() << ".\n";
        }
    }

    return 0;
}