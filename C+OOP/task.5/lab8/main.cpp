#include <iostream>
#include "graphics.h"

using namespace std;
class Point{
int x,y;
public:
    void setX(int _x){x=_x;}
    void setY(int _y){y=_y;}
   int getX(){return x;}
   int getY(){return y;}
   Point(){x=y=0;}
   Point(int _x,int _y){
   x=_x;
   y=_y;

   }
   Point(const Point &old){
   x=old.x;
   y=old.y;
   }

   Point & operator=(const Point &right){
   x=right.x;
   y=right.y;
   return *this;

   }
   ~Point(){//cout<<"Point dest\n";
   }


};
class Rect{
Point ul,lr;
int color;
public:
    void setUL(Point _ul){ul=_ul;}
    void setLR(Point _lr){lr=_lr;}
    void setColor(int _color){color=_color;}

    Point getUL(){return ul;}
    Point getLR(){return lr;}
    int getColor(){return color;}
    Rect()
    {

        ul.setX(0);
        ul.setY(0);
        lr.setX(0);
        lr.setY(0);
        color=0;
    }
    Rect(int x1,int y1,int x2,int y2,int c)//:ul(x1,y1),lr(x2,y2)
    {
        ul.setX(x1);
        ul.setY(y1);
        lr.setX(x2);
        lr.setY(y2);

        color=c;
    }
    Rect(Point _ul,Point _lr,int _c):ul(_ul),lr(_lr)
    {

    color=_c;
    }
    Rect(const Rect & old){
    ul=old.ul;
    lr=old.lr;
    color=old.color;
    }
    void Draw()
    {

        setcolor(color);
        rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
    }
};
class Circle
{

    Point center;
    int raduis,color;

public:
     void setCenter(Point _center){center=_center;}
     void setRaduis(int _raduis){raduis=_raduis;}
     void setColor(int _color){color=_color;}
     Point getCenter(){return center;}
     int getRaduis(){return raduis;}
     int getColor(){return color;}
     Circle(){
     center.setX(0);
     center.setY(0);
     raduis=0;
     color=0;
     }

     Circle(int x,int y,int r,int c){
     center.setX(x);
     center.setY(y);
     raduis=r;
     color=x;


     }
     Circle(Point _center,int r,int c){
     center=_center;
     raduis=r;
     color=c;

     }

     Circle(const Circle & old){
    center=old.center;
    raduis=old.raduis;
    color=old.color;
    }

    Circle & operator=(const Circle &right){
   center=right.center;
   raduis=right.raduis;
   color=right.color;
   return *this;

   }
   void Draw(){
   setcolor(color);
   circle(center.getX(),center.getY(),raduis);
   }

};

class Tri
{
    Point a;
    Point b;
    Point d;
    int color;
public:
     void setA(Point _a){a=_a;}
     void setB(Point _b){b=_b;}
     void setD(Point _d){d=_d;}
     void setColor(int _c){color=_c;}
     Point getA(){return a;}
     Point getB(){return b;}
     Point getD(){return d;}
    int getColor(){return color;}
    Tri(){
      a.setX(0);
      a.setY(0);
      b.setX(0);
      b.setY(0);
      d.setX(0);
      d.setY(0);
      color=0;
     }
     Tri(int x1,int y1,int x2,int y2,int x3,int y3,int c){
         a.setX(x1);
         a.setY(y1);
         b.setX(x2);
         b.setY(y2);
         d.setX(x3);
         d.setY(y3);
         color=c;
     }
     Tri(Point _a,Point _b,Point _d,int c){
         a=_a;
         b=_b;
         d=_d;
         color=c;
     }
    Tri(const Tri & old){
        a=old.a;
        b=old.b;
        d=old.d;
        color=old.color;
    }
    Tri & operator=(const Tri &right){
        a=right.a;
        b=right.b;
        d=right.d;
        color=right.color;
        return *this;
   }
   void Draw(){
   setcolor(color);
   line(a.getX(),a.getY(),b.getX(),b.getY());
   line(b.getX(),b.getY(),d.getX(),d.getY());
   line(d.getX(),d.getY(),a.getX(),a.getY());
   }


};

int main()
{
  initgraph();
  Circle c( 384,110 , 40*2, 9);
  c.Draw();
  Circle cc( 388,280 , 57*2, 9);
  cc.Draw();

  Rect r(385,338,405,384,9);
  r.Draw();
  Rect rr(318,384,472,420,9);
  rr.Draw();

  Tri t(426,395,426,410,458,410,9);
  t.Draw();
  setcolor(9);
  line(426,111,441,264);
  setcolor(9);
  line(344,113,332,274);
    return 0;
}
