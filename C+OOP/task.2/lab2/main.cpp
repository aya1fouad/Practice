#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;

public:
    void setReal(int _real){
    this->real=_real;
    }
    void setImg(int _img){
        this->img=_img;
    }
    int getReal(){
        this->real;
    }
    int getImg(){
    this->img;
    }
    Complex subComplex(Complex c2){
    Complex tmp;
    tmp.real=real-c2.real;
    tmp.img=img-c2.img;
    return tmp;
    }
    void printComplex(){
        cout<<this->real << "+"<<this->img<<"i"<<endl;
    }
    Complex (){
        cout<<"def ctor"<<endl;
    real=0;
    img=0;
    }
    Complex(int _r, int _i){
        cout<<"2p ctor"<<endl;
        real=_r;
        img=_i;
    }
    Complex(int num){
        cout<<"1p ctor"<<endl;
    real=img=num;
    }
    ~Complex(){
    cout<<"destructor called"<<endl;
    }
};

Complex AddComplex(Complex c1,Complex c2){
Complex ret;
ret.setReal(c1.getReal()+c2.getReal());
ret.setImg(c1.getImg()+c2.getImg());
return ret;
}


int main()
{
    Complex c1(1,2) ,c2(3,4),c3,c4;
    c3=AddComplex(c1,c2);
    c4=c1.subComplex(c2);
    c1.printComplex();
    c2.printComplex();
    c3.printComplex();
    c4.printComplex();
    return 0;
}

