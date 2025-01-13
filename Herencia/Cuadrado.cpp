#include "Cuadrado.hpp"
#include <iostream>

Cuadrado::Cuadrado() : Shape(), lado(0) {}

Cuadrado::Cuadrado(int x, int y, float lado) : Shape(x, y), lado(lado) {}

void Cuadrado::setLado(float lado) {
    this->lado = lado;
}

float Cuadrado::getLado() {
    return lado;
}

float Cuadrado::calcularArea() {
    return lado * lado;
}

void Cuadrado::imprimirArea() {
    cout << "Área del cuadrado: " << calcularArea() << endl;
    cout << "Coordenadas: (" << x << ", " << y << ")" << endl;
}

Cuadrado::~Cuadrado() {}
