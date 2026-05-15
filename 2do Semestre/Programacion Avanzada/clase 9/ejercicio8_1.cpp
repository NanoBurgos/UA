#include <iostream>

using namespace std;

int main() {

    // Declaramos variables
    int n;
    float temperaturas[100];

    float suma = 0;
    float promedio;

    float umbral;

    int temperaturasCriticas = 0;

    // Pedimos cantidad de sensores
    cout << "=== ANALISIS DE TEMPERATURAS CRITICAS ===" << endl;

    cout << "Cuantos sensores se registraran?: ";
    cin >> n;

    // Validamos cantidad maxima
    if (n > 100) {

        cout << "Solo se permiten hasta 100 sensores." << endl;
        return 0;
    }

    // Pedimos el umbral maximo permitido
    cout << "Ingrese el umbral maximo permitido: ";
    cin >> umbral;

    // Cargamos temperaturas
    for (int i = 0; i < n; i++) {

        cout << "Ingrese temperatura del sensor "
             << i + 1 << ": ";

        cin >> temperaturas[i];

        // Acumulamos temperaturas
        suma = suma + temperaturas[i];

        // Verificamos temperaturas criticas
        if (temperaturas[i] > umbral) {

            temperaturasCriticas++;
        }
    }

    // Calculamos promedio
    promedio = suma / n;

    // Mostramos resultados
    cout << "\n=== RESULTADOS ===" << endl;

    cout << "Promedio de temperatura: "
         << promedio << " °C" << endl;

    cout << "Temperaturas criticas: "
         << temperaturasCriticas << endl;

    // Mostramos cuales fueron las temperaturas criticas
    cout << "\nTemperaturas que superaron el umbral:" << endl;

    for (int i = 0; i < n; i++) {

        if (temperaturas[i] > umbral) {

            cout << temperaturas[i] << " °C" << endl;
        }
    }

    return 0;
}