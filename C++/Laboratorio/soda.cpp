#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

const int N = 5;

int main() {

    vector<pair<int, string>> pedidos;

    queue<string> fila;

    stack<string> historial;

    for (int i = 0; i < N; i++) {
        string nombre;
        int monto;

        cin >> nombre >> monto;

        pedidos.push_back({monto, nombre});
        fila.push(nombre);
    }

    sort(pedidos.begin(), pedidos.end());

    cout << "Pedidos ordenados por monto:" << endl;

    for (auto pedido : pedidos) {
        cout << pedido.second << ": " << pedido.first << endl;
    }

    auto mayor = max_element(pedidos.begin(), pedidos.end());

    cout << "Pedido mayor: " << mayor->second
         << " (" << mayor->first << ")" << endl;

    string estudiante;
    cin >> estudiante;

    bool encontrado = false;

    for (auto it = pedidos.begin(); it != pedidos.end(); ++it) {
        if (it->second == estudiante) {
            cout << estudiante << " pidio por "
                 << it->first << " colones" << endl;

            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << estudiante << " no hizo pedido" << endl;
    }

    while (!fila.empty()) {
        string nombre = fila.front();
        fila.pop();

        cout << "Atendido: " << nombre << endl;

        historial.push(nombre);
    }

    string comando;
    cin >> comando;

    if (comando == "deshacer" && !historial.empty()) {
        string ultimo = historial.top();
        historial.pop();

        fila.push(ultimo);

        cout << ultimo << " vuelve a la fila" << endl;
    }

    return 0;
}
