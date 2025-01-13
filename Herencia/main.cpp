#include <iostream>
#include "Shape.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"
#include "Cuadrado.hpp"
#include "Poligono.hpp"

using namespace std;

int main() {
    // Figura genérica
    Shape f1(10, 20);
    cout << f1.draw() << "con valor x en: " << f1.getX()
         << " y valor y en: " << f1.getY() << endl;

    // Círculo
    Circulo c1(10, 20, 5.0);
    c1.imprimirArea();

    // Triángulo
    Triangulo t1(15, 20, 5, 10);
    t1.imprimirArea();

    // Cuadrado
    Cuadrado s1(10, 20, 5);
    s1.imprimirArea();

    // Polígono 
    Poligono p1(10, 20, 5, 15);
    p1.imprimirArea();

    return 0;
}
