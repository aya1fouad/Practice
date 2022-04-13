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
        cout<<"+"<<img<<"i"<<endl;
    }

    void display(){

        switch(img){
    case 0: cout<<real<<endl;
        break;
    case 1:
             switch(real){
        case 0: cout<<"i"<<endl;
        break;
        default: cout<<real<<"+"<<"i"<<endl;
             }
            break;
    case -1:
              switch(real){
        case 0: cout<<"-i"<<endl;
        break;
        default: cout<<real<<"-i"<<endl;
        }
        break;
    default:
            if(img<-1){

                 switch(real){
                case 0: cout<<img<<"i"<<endl;
                    break;
                default: cout<<real<<img<<"i"<<endl;
                    }
            }
            else{
                    switch(real){
                case 0: cout<<img<<"i"<<endl;
                    break;
                    default: cout<<real<<"+"<<img<<"i"<<endl;
                    }
            }
        }
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
    Complex c1,c2,c3;
    c1.setReal(-3);
    c1.setImg(4);
    c2.setReal(2);
    c2.setImg(7);

    c3=AddComplex(c1,c2);
    c3.display();

    return 0;
}
