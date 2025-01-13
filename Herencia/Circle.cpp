#include "Circle.hpp"
#include <cmath>

Circle::Circle():Shape()
{
    r=0;
}

Circle::Circle(int x, int y, float r):Shape(x,y)
{
    this->r=r;
}

void Circle::setRadio(float r){
    this->r=r;
}

float Circle::getRadio(){
    return r;
}

float Circle::calculaArea(){
    return (M_PI*pow(r,2));
}

void Circle::imprimeArea(){

    cout<<"El area es: "<<calculaArea();
    cout<<"Mis coordenadas x e y son: "<<x<<y; //si es private se debe extraer el valor con los gets
}


Circle::~Circle()
{

}