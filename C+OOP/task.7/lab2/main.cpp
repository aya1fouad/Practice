#include <iostream>

using namespace std;
class GeoShape{
protected:
    int dim1,dim2;
public:
    void setDim1(int d1){dim1 = d1;}
    void setDim2(int d2){dim2 = d2;}
    int getDim1(){return dim1;}
    int getDim2(){return dim2;}
    GeoShape(){dim1 = 0;dim2=0;}
    virtual double cArea(){return 0;}
    GeoShape(int _dim1,int _dim2){dim1=_dim1;dim2=_dim2;}
    GeoShape(const GeoShape& old){dim1 = old.dim1;dim2 = old.dim2;}
    ~GeoShape(){cout<<"destructor of geoshape"<<endl;}};


    class Rect:public GeoShape{
    public:
        Rect(){}
        Rect(int d1,int d2):GeoShape(d1,d2){}
        Rect(const Rect& old){
        dim1 = old.dim1;dim2 = old.dim2;}
        ~Rect(){cout<<"destructor of rect"<<endl;}
        double cArea(){return dim1*dim2;}};\

    class Circle:public GeoShape
    {
       public:
        Circle(){}
        Circle(int r):GeoShape(r,r){}
        Circle(const Circle& old){
        dim1 = old.dim1;dim2 = old.dim2;}
        ~Circle(){cout<<"destructor of rect"<<endl;}
        double cArea(){return 3.14*dim1*dim2;} };

    double sumOfArea(GeoShape **arr,int size){
        int sum = 0;
      for(int i = 0;i<size;i++)
      {
          sum+=arr[i]->cArea();
      }
        return sum;
    }

int main(){
        Rect r[3] = {Rect(1,2),Rect(3,4),Rect()};
        Circle c[2] = {Circle(7),Circle(8)};
        GeoShape *geo[5] = {r,&r[1],&r[2],c,&c[1]};
        cout<<sumOfArea(geo,5)<<endl;
        return 0;
   }
