#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "ingresa la cantidad de estudiantes: ";
	cin >> N;

	float nota;
	float suma = 0;
	float mayor{}, menor{};
	int aprobados = 0, reprobados = 0;

	for (int i = 1; i <= N; i++) {

		cout << " ingresa la calificacion  del estudiante  " << i << ":";
		cin >> nota;

		if (i == 1) {
			mayor = nota;
			menor = nota;
		}
		if (nota > mayor) {
			mayor = nota;
		}
		if (nota < menor) {
			menor = nota;
		}
		suma += nota;

		if (nota >= 60) {
			aprobados++;
		}
		else {
			reprobados++;
		}
	}

	float promedio = suma / N;

	cout << "\nResultados:\n";
	cout << "Calificacion mas alta : " << mayor << endl;
	cout << "calificacion mas baja: " << menor << endl;
	cout << "Promedio: " << promedio << endl;
	cout << " Aprobados: " << aprobados << endl;
	cout << " Reprobados: " << reprobados << endl;

	return 0;
}