#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Shape.hpp"

class Triangulo : public Shape {
private:
    float base;
    float altura;

public:
    Triangulo();
    Triangulo(int x, int y, float base, float altura);

    void setBase(float base);
    void setAltura(float altura);

    float getBase();
    float getAltura();

    float calcularArea() override;
    std::string draw() override;

    ~Triangulo();
};

#endif 
