#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"

class Circle : public Shape {
private:
    float radio;

public:
    Circle();
    Circle(int x, int y, float radio);

    void setRadio(float radio);
    float getRadio();

    float calcularArea() override;
    std::string draw() override;

    ~Circle();
};

#endif 
