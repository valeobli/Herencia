#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

class Shape {
protected:
    int x;
    int y;

public:
    Shape();
    Shape(int x, int y);

    void setX(int x);
    void setY(int y);

    int getX() const;
    int getY() const;

    virtual float calcularArea() const = 0; // Pure virtual function
    virtual std::string draw() const = 0;  // Pure virtual function

    virtual ~Shape();
};

#endif // SHAPE_H
