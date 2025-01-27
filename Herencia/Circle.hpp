#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.hpp"

class Circle : public Shape {
private:
    float r;

public:
    Circle();
    Circle(int x, int y, float r);

    void setRadio(float r);
    float getRadio() const;

    float calcularArea() const override;
    std::string draw() const override;

    ~Circle();
};

#endif 