#include "Shape.hpp"

Shape::Shape() : x(0), y(0) {}

Shape::Shape(int x, int y) : x(x), y(y) {}

void Shape::setX(int x) {
    this->x = x;
}

void Shape::setY(int y) {
    this->y = y;
}

int Shape::getX() {
    return x;
}

int Shape::getY() {
    return y;
}

Shape::~Shape() {}
