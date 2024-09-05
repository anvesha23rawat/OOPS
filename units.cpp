#include<iostream>
using namespace std;
int main(){
  int u;
  cin>>u;
  int a=100,b=300;
  int x=0,y=0,z=0;
  float rs=0;
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
  cout<<rs;
}