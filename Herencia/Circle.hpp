#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.hpp"

class Circle:public Shape
{
    private:
         float r;
    public:
        Circle();
        Circle(int x, int y, float r);
        void setRadio(float r);
        float getRadio();
        float calculaArea();
        void imprimeArea();
        virtual ~Circle();
};

#endif // CIRCLE_H