/*
Practical No. 12

Create a class called Time that has separate int member data for hours,minutes and seconds.
One constructor should initialize this data to 0,and another should initialize it to fixed
values. A member function should display it in 11:59:59 format. A member function named add() 
should add two objects of type time passed as arguments. A main ( ) program should create two
initialized values together, leaving the result in the third time variable.Finally it should 
display the value of this third variable.

Source Code:

*/

#include<iostream>
#include<iomanip>
using namespace std;
class Time{
    private:
    int hour;
    int min;
    int sec;
    public:
    Time (){
        this->hour=0;
        this->min=0;
        this->sec=0;
    }
    Time(int hour,int min,int sec){
        this->hour=hour;
        this->min=min;
        this->sec=sec;
    }
    Time operator +(Time temp){
        Time t3(0,0,0);
        t3.sec=sec+temp.sec; //(sec+temp.sec)%60;
        t3.min=min+temp.min; // (min+temp.min)
        t3.hour=hour+temp.hour;
        if(t3.sec>=60){
            t3.sec-=60;
            t3.min+=1;
        }
        if(t3.min>=60){
            t3.min-=60;
            t3.hour+=1;
        }
        if(t3.hour>12){
            t3.hour-=12;
        }
        return t3;
    }
    void display(){
        cout<<setfill('0')<<setw(2)<<hour<<":"<<setfill('0')<<setw(2)<<min<<":"<<setfill('0')<<setw(2)<<sec<<":"<<endl;
    }
};
int main(){
    Time t1(10,50,55);
    cout<<"time 1= ";
    t1.display();
    Time t2(2,10,23);
    cout<<"time 2= ";
    t2.display();
    Time t3(0,0,0);
    t3=t1+t2;
    cout<<"time 3= ";
    t3.display();
    return 0;
}