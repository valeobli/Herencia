#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

class Shape
{
    protected:
        int x;
        int y;

    public:
        Shape();
        Shape(int x, int y);
        void setX(int x);
        void setY(int y);
        int getX();
        int getY();
        string draw();

        virtual ~Shape();  //destretuctor

};

#endif // SHAPE_H