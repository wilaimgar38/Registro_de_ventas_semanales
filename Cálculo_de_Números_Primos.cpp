#include <iostream>
#include <vector>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    vector<int> primos;
    int numero = 2;

    while (primos.size() < N) {
        if (esPrimo(numero)) {
            primos.push_back(numero);
        }
        numero++;
    }

    cout << "Los numeros primos son: ";
    for (int i = 0; i < primos.size(); i++) {
        cout << primos[i] << " ";
    }

    return 0;
}