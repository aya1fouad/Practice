#include <iostream>
#include "graphics.h"
using namespace std;
class Shape{
    protected:
    int color;
    public:
    void setCol(int c){color=c;}
    int getCol(){return color;}
    Shape(){color=0;}
    Shape(int _color){color=_color;}
    Shape(const Shape & old){color = old.color;}
    virtual void Draw()=0;
    ~Shape(){}
};

class Point{
    int x, y;
public:
    void setx(int _x){x = _x;}
    void sety(int _y){y = _y;}
    int getx(){return x;}
    int gety(){return y;}
    Point(){x=y=0;}
    Point(int _x, int _y){x =_x;y = _y;}
    Point (const Point &old){
        this->x=old.x;
        this->y=old.y;}
    Point& operator=(const Point &right){
        this->x=right.x;
        this->y=right.y;
        return *this;}
    ~Point(){}
};

class Rect:public Shape
{
Point ul,lr;
public:
    void setUl(Point _ul){ul=_ul;}
    void setLr(Point _lr){lr=_lr;}
    Point getUl(){return ul;}
    Point getLr(){return lr;}
    Rect(){}
    Rect(int x1, int y1, int x2, int y2, int _col):ul(x1,y1), lr(x2,y2), Shape(_col){}
    Rect(const Rect &old){
        ul=old.ul;
        lr=old.lr;
        color=old.color;}
    ~Rect(){ }
    void Draw(){
        setcolor(color);
        rectangle(ul.getx(),ul.gety(),lr.getx(),lr.gety());}
};

class Circle:public Shape
{
Point center;
int rad;
public:
    Circle(){}
    Circle(int x, int y, int r, int c ):center(x,y),Shape(c){rad=r;}
    void Draw(){
        setcolor(color);
        circle(center.getx(),center.gety(),rad);}
    Circle(const Circle &old){
        center=old.center;
        color=old.color;
        rad=old.rad;}
};

class Linee:public Shape{
    Point p1;
    Point p2;
public:
    void setP1(Point _p1){p1=_p1;}
    void setP2(Point _p2){p2=_p2;}
    Point getP1(){return p1;}
    Point getP2(){return p2;}
    Linee(){}
    Linee(int x1,int y1, int x2, int y2, int c):p1(x1,y1),p2(x2,y2), Shape(c){}
    Linee(const Linee &old){
        p1=old.p1;
        p2=old.p2;
        color=old.color;}
    void Draw(){
        setcolor(color);
        line(p2.getx(),p2.gety(),p1.getx(),p1.gety());}
};

class Tri :public Shape
{
Point l1,l2,l3;
public:
    void setL1(Point _l1){l1=_l1;}
    void setL2(Point _l2){l2=_l2;}
    void setL3(Point _l3){l3=_l3;}
    Point getL1(){return l1;}
    Point getL2(){return l2;}
    Point getL3(){return l3;}
    Tri(){}
    Tri(int x1, int y1, int x2, int y2, int x3, int y3, int col):l1(x1,y1), l2(x2,y2), l3(x3,y3), Shape(col){}
    Tri(const Tri &old){
        l1=old.l1;
        l2=old.l2;
        l3=old.l3;
        color=old.color;}

    void Draw(){
        line(l1.getx(),l1.gety(),l2.getx(),l2.gety());
        line(l1.getx(),l1.gety(),l3.getx(),l3.gety());
        line(l2.getx(),l2.gety(),l3.getx(),l3.gety()); }
};

class Picture{
Shape **arr;
int Size;
public:
    Picture(){
        arr = NULL;
        Size = 0;
    }
    Picture(Shape **_arr,int _size){
        arr = _arr;
        Size = _size;
    }

    void Paint(){
        for(int i=0;i<Size;i++){
            arr[i]->Draw(); }
    }
};


int main(){
    initgraph();

    Circle *cir=new Circle[2];
    cir[0]=Circle(384,110 , 40*2, 9);
    cir[1]=Circle(388,280 , 57*2, 9);

    Rect* rec=new Rect[2];
    rec[0]=Rect(385,338,405,384,9);
    rec[1]=Rect(318,384,472,420,9);

    Linee *l=new Linee[2];
    l[0]=Linee(426,111,441,264,9);
    l[1]=Linee(344,113,332,274,9);

    Tri *t = new Tri(426,395,426,410,458,410,9);

    Shape *sh[7] = {rec , &rec[1],cir,&cir[1],l,&l[1],t};
    Picture p(sh,7);
    p.Paint();

    return 0;
}
