//Jose J. Hernandez Ortega
// Janluis Lebron Rivera
//Ángel Hernández

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

// VARIABLES

bool programaActivo = true;
int opcion = 0;
int bpm = 0;
string rutaArchivo = "";
int resultadoDeteccion = 0;

// Constantes de BPM permitidas
const int BPM_MIN = 40;
const int BPM_MAX = 240;


// Función: leerEnteroEnRango
// Explicación: Pide un número al usuario y valida que esté en un rango.

int leerEnteroEnRango(const string& mensaje, int minimo, int maximo) {
    int valor = 0;

    while (true) {
        cout << mensaje;

        if (cin >> valor && valor >= minimo && valor <= maximo) {
            break; // aceptado
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Número inválido. Debe estar entre " << minimo
                << " y " << maximo << ".\n";
        }
    }

    return valor;
}


// Función: detectarBPMConAubio 
//Parte de Jose 
int detectarBPMConAubio(const string& ruta) {
    (void)ruta; // evita el warning para la variable no usada
    cout << "[Info] La detección automática REAL no está implementada.\n";
    return -1;
}


// esto es para detectar el BPM

int detectarBPM(const string& ruta) {
    cout << "\n[Info] Intentando detectar BPM para: " << ruta << "\n";

    int autoBPM = detectarBPMConAubio(ruta);

    if (autoBPM < 0) {
        cout << "[Advertencia] Falló la detección automática.\n";
        autoBPM = leerEnteroEnRango("Ingrese BPM manualmente (40–240): ",
            BPM_MIN, BPM_MAX);
    }

    return autoBPM;
}


// Función: mostrarMenu

void mostrarMenu() {
    cout << "\n=== Detector de BPM (Versión Manual) ===\n"
        << "1) Detectar BPM de un archivo de audio\n"
        << "0) Salir\n> ";
}
//Hasta aqui

// Función principal

int main() {

    while (programaActivo) {
        mostrarMenu();

        if (!(cin >> opcion)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Entrada inválida.\n";
            continue;
        }

        if (opcion == 1) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpiar buffer

            cout << "Ingrese la ruta del archivo (.wav o .mp3): ";
            getline(cin, rutaArchivo);

            bpm = detectarBPM(rutaArchivo);

            cout << "\nResultado:\n";
            cout << "  Archivo : " << rutaArchivo << "\n";
            cout << "  BPM     : " << bpm << "\n";
        }
        else if (opcion == 0) {
            programaActivo = false;
        }
        else {
            cout << "Opción inválida.\n";
        }
    }

    cout << "¡Hasta luego!\n";
    return 0;
}
