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
    float getLado();

    float calcularArea();
    void imprimirArea();

    virtual ~Cuadrado();
};

#endif // CUADRADO_H
