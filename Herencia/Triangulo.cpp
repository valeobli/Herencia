#include "Triangulo.hpp"
#include <iostream>

Triangulo::Triangulo() : Shape(), base(0), altura(0) {}

Triangulo::Triangulo(int x, int y, float base, float altura) 
    : Shape(x, y), base(base), altura(altura) {}

void Triangulo::setBase(float base) {
    this->base = base;
}

void Triangulo::setAltura(float altura) {
    this->altura = altura;
}

float Triangulo::getBase() {
    return base;
}

float Triangulo::getAltura() {
    return altura;
}

float Triangulo::calcularArea() {
    return (base * altura) / 2;
}

void Triangulo::imprimirArea() {
    cout << "Área del triángulo: " << calcularArea() << endl;
    cout << "Coordenadas: (" << x << ", " << y << ")" << endl;
}

Triangulo::~Triangulo() {}
