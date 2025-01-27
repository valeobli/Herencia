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

    int getLados();
    float getLargo();

    float calcularArea() override;
    std::string draw() override;

    ~Poligono();
};

#endif 
