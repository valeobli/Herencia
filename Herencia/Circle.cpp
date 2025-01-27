#include "Circle.hpp"
#include <cmath>

Circle::Circle() : Shape(), radio(0) {}

Circle::Circle(int x, int y, float radio) : Shape(x, y), radio(radio) {}

void Circle::setRadio(float radio) {
    this->radio = radio;
}

float Circle::getRadio() {
    return radio;
}

float Circle::calcularArea() {
    return M_PI * radio * radio;
}

std::string Circle::draw() {
    return "Soy un círculo";
}

Circle::~Circle() {}
