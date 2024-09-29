/*
Practical No. 14

Create a class Complex having two int type variable named real & img denoting real and
imaginary part respectively of a complex number. Overload +, - , == operator to add, to 
subtract and to compare two complex numbers being denoted by the two complex type objects


Source Code:

*/ 
#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
    public:
    complex(){

    }

    complex(int real,int img){
        this->img=img;
        this->real=real;
    }
    complex operator+(complex d2){
        complex d3;
        d3.real=real+d2.real;
        d3.img=img+d2.img;
        return d3;
    }
    
    complex operator-(complex d2){
        complex d3;
        d3.real=real-d2.real;
        d3.img=img-d2.img;
        return d3;
    }
    bool operator==(complex d2){
        // bool l;
        if((real==d2.real) && (img==d2.img)){
            return true;

        }
        else{
            return false;
        }
    }

    void show(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main(){
    complex d1(4,5);
    complex d2(7,3);
    complex d3;
    d3=d1+d2;
    d3.show();
    d3=d1-d2;
    d3.show();
    bool l1=(d1==d2);
    if(l1){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}


