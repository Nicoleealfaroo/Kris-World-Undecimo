#include <iostream>
#include <string>
using namespace std;

int main () {
    double N; //Cantidad de vagones
    cin >> N;
    double Q; //Cantidad de operaciones
    cin >> Q;
    double v; //Cantidad de la carga
    cin >> v;
    double p; //Cantidad de la consulta
    cin >> p;
    
    //Esto es para que la N cumpla los parametros
    string cantidad_de_vagones; {
    if (1 <= N && 100 >= N)
    cout << N << endl; }
    
    //Esto es para comprobar que la Q cumpla los parametros
    string cantidad_de_operaciones; {
    if (1 <= Q && 50 >= Q)
    cout << Q << endl; }

    //string cargar; {
        //for (int v = 1; v <= p; v++) 
    //cout << v << '\n';
    //}
    
    //Esto es para el A
    string unidades_de_carga; {
    if (1 <= p  && p <= N || 1 <= v && v <= 1000)
    cout << "A" << " " << p << " " << v << endl; }
    
    //Esto es para lo del C
    string unidades_de_carga_actuales; {
    if (1 <= p && p <= N)
    cout << "C" << " " << p << " " << endl; }
}