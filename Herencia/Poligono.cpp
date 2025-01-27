#include "Poligono.hpp"
#include <iostream>

Poligono::Poligono() : Shape(), lados(0), largo(0) {}

Poligono::Poligono(int x, int y, int lados, float largo) 
    : Shape(x, y), lados(lados), largo(largo) {}

void Poligono::setLados(int lados) {
    this->lados = lados;
}

void Poligono::setLargo(float largo) {
    this->largo = largo;
}

int Poligono::getLados() {
    return lados;
}

float Poligono::getLargo() {
    return largo;
}

float Poligono::calcularArea() {
    if (lados < 3) return 0;  // Un polígono debe tener al menos 3 lados
    return (lados * largo * largo) / (4 * tan(M_PI / lados));
}

std::string Poligono::draw() {
    return "Soy un polígono";
}

Poligono::~Poligono() {}
