#include <iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;

public:
    void setReal(int _real);
    void setImg(int _img);
    int getImg();
    int getReal();
    void printComplex();
    Complex AddComplex(Complex right);
    Complex ();
    Complex(int _r, int _i);
    Complex(int num);
   ~Complex();

};
/////////////////////////////////////////
int main()
{
    Complex c1, c2 , c3;
    c1.setReal(1);
    c1.setImg(2);
    c2.setReal(3);
    c2.setImg(4);
    c3=c1.AddComplex(c2);
    c3.printComplex();
    return 0;
}
///////////////////////////////
 void Complex::setReal(int _real){
    this->real=_real;
    }
    void Complex::setImg(int _img){
        this->img=_img;
    }
    int Complex::getReal(){
        this->real;
    }
    int Complex::getImg(){
    this->img;
    }
    Complex Complex::AddComplex(Complex right){
         Complex ret;
          ret.real=real+right.real;
          ret.img=img+right.img;
         return ret;
    }
    void Complex::printComplex(){
        cout<<this->real << "+"<<this->img<<"i"<<endl;
    }
    Complex::Complex (){
        cout<<"def ctor"<<endl;
    real=0;
    img=0;
    }
    Complex::Complex(int _r, int _i){
        cout<<"2p ctor"<<endl;
        real=_r;
        img=_i;
    }
    Complex::Complex(int num){
        cout<<"1p ctor"<<endl;
    real=img=num;
    }
   Complex:: ~Complex(){
    cout<<"destructor called"<<endl;
    }

