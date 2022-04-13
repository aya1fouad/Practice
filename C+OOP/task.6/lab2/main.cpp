#include <iostream>
using namespace std;

class GeoShape{
protected:
    double dim1, dim2;
    void setD1(double _dim1){ dim1=_dim1;}
    void setD2(double _dim2){ dim2=_dim2;}
    double getD1(){ return dim1;}
    double getD2(){ return dim2;}
    GeoShape(){
        dim1=0;
        dim2=0; }
    GeoShape(double _dim1, double _dim2){
        dim1=_dim1;
        dim2=_dim2; }
};

class Rect:public GeoShape {
public:
    Rect(){}
    Rect(double _d1, double _d2):GeoShape(_d1,_d2) {}
    double areaC(){
        return dim1*dim2; }
 };

class Square:public GeoShape{
public:
    Square(){}
    Square(double d):GeoShape(d,d) {}
    double areaC(){
        return dim1*dim2; }
};

class Circle:public GeoShape{
public:
    Circle(){}
    Circle(double r):GeoShape(r,r) {}
    double areaC(){
        return 3.14 * dim1 * dim2; }
};

class Tri:public GeoShape{
    public:
    Tri(){}
    Tri(double b, double h):GeoShape(b,h){}
    double areaC(){
        return 0.5 * dim1 * dim2; }
};


int main(){
    Rect c(6,9);
    cout<<"Area of rectangle is "<< c.areaC()<<endl;

    Square s(6);
    cout<<"Area of square is "<<s.areaC()<<endl;

    Circle r(7);
    cout<<"Area of circle is "<<r.areaC()<<endl;

    Tri t(6,9);
    cout<<"Area of triangle is "<<t.areaC()<<endl;



    return 0;
}
