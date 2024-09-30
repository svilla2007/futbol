#include <iostream>
using namespace std;

class Equipo {
public:
    string nombre;
    int goles;
    int faltas;
    int tirosEsquina;

    // Constructor para inicializar el equipo
    Equipo(string n) {
        nombre = n;
        goles = 0;
        faltas = 0;
        tirosEsquina = 0;
    }
};

class Partido {
public:
    Equipo equipo1;
    Equipo equipo2;

    // Constructor para inicializar el partido con dos equipos
    Partido(string nombre1, string nombre2) : equipo1(nombre1), equipo2(nombre2) {}

    // Método para ingresar los datos del partido manualmente
    void jugarPartido() {
        cout << "Ingrese los goles de " << equipo1.nombre << ": ";
        cin >> equipo1.goles;
        cout << "Ingrese las faltas de " << equipo1.nombre << ": ";
        cin >> equipo1.faltas;
        cout << "Ingrese los tiros de esquina de " << equipo1.nombre << ": ";
        cin >> equipo1.tirosEsquina;

        cout << "Ingrese los goles de " << equipo2.nombre << ": ";
        cin >> equipo2.goles;
        cout << "Ingrese las faltas de " << equipo2.nombre << ": ";
        cin >> equipo2.faltas;
        cout << "Ingrese los tiros de esquina de " << equipo2.nombre << ": ";
        cin >> equipo2.tirosEsquina;
    }

    // Método para mostrar el resultado del partido
    void mostrarResultado() {
        cout << "\nResultado del Partido:\n";
        cout << equipo1.nombre << " - Goles: " << equipo1.goles << ", Faltas: " << equipo1.faltas
             << ", Tiros de Esquina: " << equipo1.tirosEsquina << endl;
        cout << equipo2.nombre << " - Goles: " << equipo2.goles << ", Faltas: " << equipo2.faltas
             << ", Tiros de Esquina: " << equipo2.tirosEsquina << endl;

        if (equipo1.goles > equipo2.goles) {
            cout << "Ganador: " << equipo1.nombre << endl;
        } else if (equipo1.goles < equipo2.goles) {
            cout << "Ganador: " << equipo2.nombre << endl;
        } else {
            cout << "El partido terminó en empate." << endl;
        }
    }
};

int main() {
    // Crear los equipos
    string nombreEquipo1, nombreEquipo2;
    cout << "Ingrese el nombre del equipo 1: ";
    cin >> nombreEquipo1;
    cout << "Ingrese el nombre del equipo 2: ";
    cin >> nombreEquipo2;

    // Crear el partido
    Partido partido(nombreEquipo1, nombreEquipo2);

    // Jugar el partido
    partido.jugarPartido();

    // Mostrar el resultado
    partido.mostrarResultado();

    return 0;
}
