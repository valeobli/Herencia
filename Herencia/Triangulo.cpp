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

float Triangulo::getBase() const {
    return base;
}

float Triangulo::getAltura() const {
    return altura;
}

float Triangulo::calcularArea() const {
    return (base * altura) / 2;
}

std::string Triangulo::draw() const {
    return "Soy un triángulo";
}

Triangulo::~Triangulo() {}
