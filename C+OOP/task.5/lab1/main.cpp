#include <iostream>

using namespace std;
class Complex {
int real ;
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

 Complex (const Complex &old) {
 real=old.real;
 img=old.img;
 cout<<"ctor";
 }

 operator int(){
 return this->real;
 }

};

int main()
{
 Complex c1(11,22);
 int x;
 x=c1;
 cout<<x;
    return 0;
}
