#include "Circle.hpp"
#include <cmath>
#include <iostream>

Circle::Circle() : Shape(), r(0) {}

Circle::Circle(int x, int y, float r) : Shape(x, y), r(r) {}

void Circle::setRadio(float r) {
    this->r = r;
}

float Circle::getRadio() const {
    return r;
}

float Circle::calcularArea() const {
    return M_PI * r * r;
}

std::string Circle::draw() const {
    return "Soy un círculo";
}

Circle::~Circle() {}
