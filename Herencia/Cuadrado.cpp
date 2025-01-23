#include "Cuadrado.hpp"
#include <iostream>

Cuadrado::Cuadrado() : Shape(), lado(0) {}

Cuadrado::Cuadrado(int x, int y, float lado) : Shape(x, y), lado(lado) {}

void Cuadrado::setLado(float lado) {
    this->lado = lado;
}

float Cuadrado::getLado() const {
    return lado;
}

float Cuadrado::calcularArea() const {
    return lado * lado;
}

std::string Cuadrado::draw() const {
    return "Soy un cuadrado";
}

Cuadrado::~Cuadrado() {}
