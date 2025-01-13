#include "Shape.hpp"

//Constructor por defecto
Shape::Shape()
{
    x=0;
    y=0;
}

//Constructor con parámetros
Shape::Shape(int x, int y){
    this->x=x;
    this->y=y;
}

//Constructor initializer list
/*Shape::Shape(int cx, int cy):x(cx),y(cy){

}*/

string Shape::draw(){
    return "Soy una figura ";
}

void Shape::setX(int x){
    this->x=x;
}

int Shape::getX(){
    return x;
}

void Shape::setY(int y){
    this->y=y;

}

int Shape::getY(){
    return y;

}


Shape::~Shape()
{
    //dtor
}