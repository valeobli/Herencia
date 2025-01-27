#ifndef CUADRADO_H
#define CUADRADO_H

#include "Shape.hpp"

class Cuadrado : public Shape {
private:
    float lado;

public:
    Cuadrado();
    Cuadrado(int x, int y, float lado);

    void setLado(float lado);
    float getLado() const;

    float calcularArea() const override;
    std::string draw() const override;

    ~Cuadrado();
};

#endif 
