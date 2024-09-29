/*
Practical No. 9

Construct a Program in C++ to show the working of function overloading 
(compile time polymorphism) by using a function named calculate Area () 
to calculate area of square, rectangle and triangle using different signatures as required.

Source Code:

*/
#include<iostream>
using namespace std;
class area{
    double length;
    double width;
    double side;
    double base;
    double height;
    public:
    double calculatearea(double length,double width){
        return length*width;
    }
    double calculatearea(double side){
        return side*side;
    }
    double calculatearea(float base,float height){
        return 0.5*base*height;
    }
};
int main(){
    area a;
    double l,w,s;
    float b,h;
    cout<<"Enter the dimensions :";
    cin>>l>>w>>s>>b>>h;
    double rec=a.calculatearea(l,w);
    cout<<"Area of the rectangle :" <<rec<<endl;
    double sq=a.calculatearea(s);
    cout<<"Area of the square :" <<sq<<endl;
    double tri=a.calculatearea(b,h);
    cout<<"Area of the triangle :" <<tri<<endl;
    return 0;
}