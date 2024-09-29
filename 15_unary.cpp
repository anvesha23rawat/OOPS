/*
Practical No. 15

Using the concept of operator overloading. Implement a program to overload the following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement

Source Code:

*/ 
#include<iostream>
using namespace std;
class overload{
    int x;
    public:
    overload(){

    }
    overload(int x){
        this->x=x;
    }
    overload operator -(){
        x=x*(-1);
    }
    overload operator ++(){
        x+=1;
    }
    overload operator ++(int no_use){
        x+=1;
    }
    overload operator --(){
        x-=1;
    }
    overload operator --(int no_use){
        x-=1;
    }
    void show(){
        cout<<x<<endl;
    }
};
int main(){
    overload d1(5);
    cout<<"unary- : ";
    -d1;
    d1.show();
    cout<<"unary++ pre : ";
    ++d1;
    d1.show();
    cout<<"unary++ post : ";
    d1++;
    d1.show();
    cout<<"unary-- pre : ";
    --d1;
    d1.show();
    cout<<"unary-- post : ";
    d1--;
    d1.show();
    // cout<<"unary- : ";
    // -d1;
    // d1.show();
    return 0;
}