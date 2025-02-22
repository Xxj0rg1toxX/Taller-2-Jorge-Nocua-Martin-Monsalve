#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //pitagoras
    float a, b, resultado;
    cout << "Dame la medida de tus dos catetos: " << endl;

    //Entrada, los dos catetos de un triangulo rectangulo
    cin >> a;
    cin >> b;

    //Proceso se suman los catetos al cuadrado, y se le saca raiz cuadrada, C++ no tiene está funcion, así que se importa una carpeta de matematicas.
    resultado = sqrt((a*a)+(b*b));

    //Salida, la hipotenusa
    cout << "La medida de tu hipotenusa es " << resultado << endl;
    
    //Punto pendiente
    float m, Dy, Dx, x, y, x1, y1;
    cout << "Dame las cordenadas de tu primer punto (x, y) respectivamente: ";

    //Entrada, coordenadas de dos puntos
    cin >> x;
    cin >> y;
    cout << "Ahora dame las coordenadas de tu segundo punto (x, y) respectivamente: ";
    cin >> x1;
    cin >> y1;

    //Proceso se saca el diferencial de y y x, y se divide Dy sobre Dx
    Dy = y1 - y;
    Dx = x1 - x;
    m = Dy / Dx;

    //Salida, La pendiente
    cout << "La pendiente de tu funcion lineal es " << m << endl;

    //Ejercicio atleta
    float d1, d2, d3, t1, t2, t3, v1, v2, v3, promedio;
    cout << "Dime las tres distancias que recorrió el atleta respectivamente: ";

    //Entrada, las tres distancias y los tres tiempos
    cin >> d1;
    cin >> d2;
    cin >> d3;
    cout << "Dime los tres tiempos que demoró en cada distancia: ";
    cin >> t1;
    cin >> t2;
    cin >> t3;

    //Proceso, hallar la velocidad de cada recorrido y se le saca promedio
    v1 = d1 / t1;
    v2 = d2 / t2;
    v3 = d3 / t3;
    promedio = (v1 + v2 + v3) / 3;

    //Salida, velocidad promedio
    cout << "El promedio de velocidad del atleta es de: " << promedio << " m/s" << endl;

    //Ejercicio manzana, se lanza una manzana de un edificio, cada piso es de 2m, cuanto demora en caer desde un piso determinado
    float g, pisos, tiempo, altura;
    g = 9.81;
    cout << "Desde que piso quieres tirar la manzana: ";

    //Entrada, desde que piso se va a lanzar
    cin >> pisos;

    //Proceso, t= 2da
    altura = 2 * pisos;
    tiempo = sqrt((2 * altura )/ g);

    //Salida, el tiempo del recorrido
    cout << "Tu manzana duará " << tiempo << " segundos en caer al piso" << endl;

    // Perimetro del cuadrilatero y rodearlo 3 veces de puas
    float p, q, r, s, vueltas, perimetro;
    cout << "Dame la distancia en m de los 4 lados: ";

    //Entrada, los lados del cuadrilatero
    cin >> p;
    cin >> q;
    cin >> r;
    cin >> s;

    //Proceso sumar todos los lados para obtener el perimetro y de la distancia del alambre de puas
    perimetro = p + q + r + s;
    vueltas = perimetro * 3;

    //Salida, El perimetro y la distancia necesaria para colocar las puas
    cout << "El perimetro de tu terreno es de " << perimetro << "m y se necesitan " << vueltas << "m de alambre de puas para rodearlo";
    return 0;
} 