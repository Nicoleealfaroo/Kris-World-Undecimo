#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

class Medicamento {

private:
    string Nombre;
    int PrecioUnitario;
    int Stock;

public:
    Medicamento() {
        this -> Nombre = "Sin nombre";
        this -> PrecioUnitario = 0;
        this -> Stock = 0;
    }

    Medicamento(string Nombre, int PrecioUnitario, int Stock) {
        this -> Nombre = Nombre;
        this -> PrecioUnitario = PrecioUnitario;
        this -> Stock = Stock;
    }

    string getNombre() {
        return this -> Nombre;
    }

    bool despachar(int Cantidad) {
        if (this -> Stock >= Cantidad) {
            this -> Stock -= Cantidad;
            return true;
        }
        return false;
    }

    int ValorInventario() {
        return this -> PrecioUnitario * this -> Stock;
    }
};

int main() {
    vector < Medicamento > Inventario;     
    queue < pair < string, int >> pedidos; 

    int M;
    if (!(cin >> M)) return 0; 

    for (int i = 0; i < M; i++) {
        string Comando;
        cin >> Comando;

        if (Comando == "Agregar") {
            string Nombre;
            int Precio, Stock;
            cin >> Nombre >> Precio >> Stock;

            Medicamento NuevoMedicamento(Nombre, Precio, Stock);
            Inventario.push_back(NuevoMedicamento);
        }

        else if (Comando == "Pedido") {
            string Nombre;
            int Cantidad;
            cin >> Nombre >> Cantidad;
            pedidos.push({Nombre, Cantidad});
        }

        else if (Comando == "Procesar") {
        if (pedidos.empty()) {
            cout << "No hay pedidos pendientes" << endl;

        } else {
            pair<string, int> PedidoActual = pedidos.front();
            pedidos.pop();
            string nombreBuscado = PedidoActual.first;
            int CantidadPedida = PedidoActual.second;
            for (size_t j = 0; j < Inventario.size(); j++) {
            if (Inventario[j].getNombre() == nombreBuscado) {
            if (Inventario[j].despachar(CantidadPedida)) {
                cout << "Despachado: " << nombreBuscado << " x " << CantidadPedida << endl;
            } else {
                cout << "Stock insuficiente: " << nombreBuscado << endl;
                }
        break;
        }}}}

        else if (Comando == "Inventario") {
        int TotalInventario = 0;
        for (size_t j = 0; j < Inventario.size(); j++) {
            TotalInventario += Inventario[j].ValorInventario();
        }
        cout << "Valor del inventario: " << TotalInventario << endl;
        }
    }

    return 0;
}