

#include <iostream>
using namespace std;


double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE AREA MODULAR - ESTUDIANTE: Federico Mattia" << endl;
    cout << "=====================================================" << endl;
    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;


    if (radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1;
    }

    
    double areaFinal = calcularAreaCirculo(radioEstudiante);


    cout << "=> El area del circulo es: " << areaFinal << " cm^2" << endl;

    
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;
    if (radioEstudiante <= 5.0) {
        cout << " .---. " << endl;
        cout << " / X \\ -> [DIANA MINI / COMPACTA]" << endl;
        cout << " \\ * / " << endl;
        cout << " '---' " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << " .---. " << endl;
        cout << " / .---. \\ " << endl;
        cout << " | / O \\ | -> [DIANA ESTÁNDAR DE TIRO]" << endl;
        cout << " | \\ * / | " << endl;
        cout << " \\ '---' / " << endl;
        cout << " '---' " << endl;
    } else {
        cout << " .---. " << endl;
        cout << " / .---. \\ " << endl;
        cout << " | / .-. \\ | " << endl;
        cout << " | | X | | -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << " | \\ '-' / | " << endl;
        cout << " \\ '---' / " << endl;
        cout << " '---' " << endl;
    }

    cout << "=====================================================" << endl;
    return 0;
}


double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;
    double area = PI * r * r;
    return area;
}
