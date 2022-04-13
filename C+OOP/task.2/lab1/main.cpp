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



int main()
{
    Complex c1,c2;
    Complex c3(3,4);
    Complex c4(5);
    return 0;
}

