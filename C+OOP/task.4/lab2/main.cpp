
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


Complex AddComplex(Complex c){
Complex tmp;
tmp.real=real+c.real;
tmp.img=img+c.img;
return tmp;
}

 Complex (const Complex &old) {
 real=old.real;
 img=old.img;
 cout<<"ctor";
 }

 Complex operator+(const Complex &right) {
  Complex retval;
  retval.real=real+right.real;
  retval.img=img+right.img;
 return retval;
 }

Complex &operator++() {
  this->real++;
 return *this;
 }

Complex operator++(int) {
  Complex retval (*this);
  this->real++;
  return retval;
 }

 Complex &operator+=(Complex &right){
 this->real+=right.real;
 this->img+=right.img;
 return *this;
 }

 Complex operator+(int num){
 Complex retval(real+num,img);
 return retval;
 }

 int operator>(Complex right){
 return this->real > right.real&&this->img > right.img;
 }

 int operator<(Complex right){
  return this->real < right.real&&this->img < right.img;
    }

int operator<=(Complex right){
  return this->real < right.real&&this->img < right.img && this->img == right.img;
    }
int operator>=(Complex right){
  return this->real > right.real&&this->img > right.img &&this->img == right.img;
    }

 Complex operator=(Complex right){
 real=right.real;
 img=right.img;
 return *this;
 }

};

Complex operator+(int num,Complex right){
 Complex retval;
 retval.setReal(right.getReal()+num);
 return retval;

 }


int main()
{
  Complex c1(1,2) , c2(3,4) ,c3;
// c3=c1+c2;
//c3=++c1;
//c3=c1++;
// c1 +=c2;
//c3=c1+7;
//c3=7+c1;
//c1>c2;
//c1<=c2;
//c1>=c2;
//c3=c1;

    return 0;
}

