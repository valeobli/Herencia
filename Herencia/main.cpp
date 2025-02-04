#include <iostream>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Triangulo.hpp"
#include "Cuadrado.hpp"
#include "Poligono.hpp"
#include <list>

using namespace std;

int main() {
    list<Shape*> shapes;

   
    shapes.push_back(new Circle(10, 20, 5.0));
    shapes.push_back(new Triangulo(15, 20, 5, 10));
    shapes.push_back(new Cuadrado(10, 20, 5));
    shapes.push_back(new Poligono(10, 20, 5, 15));

   
    for (Shape* shape : shapes) {
        cout << shape->draw() << endl;
        cout << "area: " << shape->calcularArea() << endl;
        cout << "Coordenadas: (" << shape->getX() << ", " << shape->getY() << ")" << endl;
        cout << "-" << endl;
    }

   
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
