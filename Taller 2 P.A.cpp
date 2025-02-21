//#include <iostream>
//#include <cmath>
using namespace std;

int main(){

    //Ejercicio panes
    int panes, resultado;
    cout << "Buenos dias, ¿Cuánto de pan quieres?: " << endl;

    //Entrada
    cin >> panes;

    //Proceso
    resultado = panes / 400;

    //Salida
    cout << "Tomas tus " << resultado << " panes" << endl;

    //Ejercicio Temperatura
    double gradesC;
    cout << "Conversion de grados Celsius a Farenheit, coloca los grados Celsius: ";

    //Entrada
    cin >> gradesC;

    // Proceso
    double gradesF = ((gradesC * 9) / 5) + 32 ;

    //Salida
    cout << "La temperatura es de " << gradesF << " Fahrentheit" << endl ;

    //Ejercicio funcion cuadratica
    float a, b, c, parte1, parte2, parte3, parte4, proceso1, resultado1, resultado2;
    cout << "Dime tus valores a, b, c: " << endl;

    //Entrada
    cin >> a;
    cin >> b; 
    cin >> c;

    //Proceso
    parte1 = -b;
    parte2 = b * b;
    parte3 = -4 * a * c;
    parte4 = 2 * a;

    proceso1 = sqrt(parte2 + parte3);
    resultado1 = (parte1 + proceso1) / parte4;
    resultado2 = (parte1 - proceso1) / parte4;

    //Salida
    cout << "Tus resultados son: " << resultado1 << " y " << resultado2 << endl;

    // ejercicio suma
    int y, z, suma;
    cout << "Mega Calculadora (Sabe sumar): ";

    //Entrada
    cin >> a;
    cin >> b;

    //Proceso
    suma = a + b;

    //Salida
    cout << "Tu suma es " << suma << endl;
    return 0;
}