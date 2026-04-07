#include <iostream>
#include <string>

using namespace std;

int main() {
    string dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    double ventas[7];
    
    double totalVentas = 0;
    double ventaMayor = 0;
    string diaMayor = "";
    bool huboDiaSinVentas = false;

    cout << "Registro de Ventas Semanales" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Ingrese las ventas del dia " << dias[i] << ": ";
        cin >> ventas[i];

        totalVentas += ventas[i];

        if (ventas[i] > ventaMayor) {
            ventaMayor = ventas[i];
            diaMayor = dias[i];
        }

        if (ventas[i] == 0) {
            huboDiaSinVentas = true;
        }
    }
    cout << "\n Resultados de la Semana" << endl;
    cout << "Total de ventas de la semana: Q" << totalVentas << endl;
    cout << "El dia con mayores ventas fue el " << diaMayor << " con: Q" << ventaMayor << endl;

    if (huboDiaSinVentas) {
        cout << "Alerta: Hubo al menos un dia sin ventas (0)." << endl;
    } else {
        cout << "Todos los dias tuvieron ventas superiores a cero." << endl;
    }

    return 0;
}
