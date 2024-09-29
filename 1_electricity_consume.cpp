/*
Practical No. 1

An electricity board charges the following rates to domestic users to discourage large
consumption of energy.
For the first 100 units: - 60 P per unit
For the next 200 units: -80 P per unit
Beyond 300 units: -90 P per unit
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300 then an
additional surcharge of 15% is added.Implement a C++ program to read the names of users 
and number of units consumed and display the charges with names.

Source Code:

*/

#include<iostream>
using namespace std;
class electricity{
    string name;
    int units;
    float rs;
    public:
    void setDetails(string n,int u){
        name=n;
        units=u;
    }
    void calculate_bill(int u){
        int a=100,b=300;
        int x=0,y=0,z=0;
        rs=0;
        if((a/u)<1){
        u-=100;
        x=60;
        }
        if((b/u)<=1){
        u-=200;
        y=160;
        }
        if(u>0){
        z=(u*90)/100;
        }
        rs=x+y+z+50;
        if(rs>300){
        rs+=rs*0.15;
        }
    }
    void showBill(){
        cout<<rs;
    }
};
int main(){
    electricity a1;
    string n;
    cout<<"Enter name : ";
    cin>>n;
    int u;
    cout<<"Enter units : ";
    cin>>u;
    a1.setDetails(n,u);
    a1.calculate_bill(u);
    a1.showBill();
  return 0;
}