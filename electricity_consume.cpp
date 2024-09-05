//question 2: electricity
#include<iostream>
using namespace std;
class electricity{
    string name;
    int units;
    float rs;
    public:
    void setdetails(string n,int u){
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
    a1.setdetails(n,u);
    a1.calculate_bill(u);
    a1.showBill();
  return 0;
}