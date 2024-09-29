/*
Practical No. 6

Define a class Hotel in C++ with the following specifications.
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the
value of days* Tariff >10000,
then total amount is 1.05* days*Tariff.
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff,
NOD and Amount (amount to be displayed by calling function) CALC()
Source Code:

*/
#include<iostream>
using namespace std;
class Hotel{
  int rno;
  string name;
  float tariff;
  int nod;

  int calc(int nod,float tariff){
    if((nod*tariff)>10000)
      return 1.05*nod*tariff;
    else  
      return nod*tariff;
  }

  public:
  void checkin(int rno,string name,float tariff,int nod){
    this->rno=rno;
    this->name=name;
    this->tariff=tariff;
    this->nod=nod;
  }
  void checkout(){
    int i=0;
    cout<<"details of customer :"<<i+1<<endl;
    cout<<"room no : "<<rno<<endl;
    cout<<"name : "<<name<<endl;
    cout<<"tariff : "<<tariff<<endl;
    cout<<"nod : "<<nod<<endl;
    cout<<"amount : "<<calc(nod,tariff)<<endl;
    i++;
  }
};
int main(){
  cout<<"Welcome to our hotel"<<endl;
  int n;
  cout<<"Enter number of customer : ";
  cin>>n;
  int rno,nod;
  float tariff;
  string name;
  Hotel a[n];
  for(int i=0;i<n;i++){
    cout<<endl;
    cout<<"Enter the details of customer :"<<i+1<<endl;
    cout<<"Enter name of the customer : ";
    cin>>name;
    cout<<"Enter room no : ";
    cin>>rno;
    cout<<"Enter tariff : ";
    cin>>tariff;
    cout<<"Enter no of days of stay : ";
    cin>>nod;
  }
  for(int i=0;i<n;i++){
    a->checkin(rno,name,tariff,nod);
  }
  for(int i=0;i<n;i++){
    cout<<endl;
    a->checkout();
  }
  cout<<"Thank you";
  return 0;
}