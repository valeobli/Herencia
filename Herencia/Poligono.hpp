#ifndef POLIGONO_H
#define POLIGONO_H

#include "Shape.hpp"
#include <cmath>

class Poligono : public Shape {
private:
    int lados;
    float largo;

public:
    Poligono();
    Poligono(int x, int y, int lados, float largo);

    void setLados(int lados);
    void setLargo(float largo);

    int getLados() const;
    float getLargo() const;

    float calcularArea() const override;
    std::string draw() const override;

    ~Poligono();
};

#endif 
