#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;

public:
    void setReal(int _real){
    real=_real;
    }
    void setImg(int _img){
        img=_img;
    }
    int getReal(){
        return real;
    }
    int getImg(){
    return img;
    }
   void printComplex(){
       cout<<real<<"+"<<img<<"i"<<endl;
   }

};

int main()
{
    Complex c1;
   c1.setReal(3);
   c1.setImg(4);
   c1.printComplex();

    return 0;
}
