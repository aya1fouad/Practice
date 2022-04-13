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

    Complex subComplex(Complex c2){
    Complex tmp;
    tmp.real=real-c2.real;
    tmp.img=img-c2.img;
    return tmp;
    }

    void printComplex(){
        cout<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1,c2;
    c1.setReal(3);
    c1.setImg(4);

    c2.setReal(2);
    c2.setImg(7);

    c1.subComplex(c2);
    c1.printComplex();
    return 0;
}
