#include<iostream>
using namespace std;
class customer{
  string name;
  int accno;
  string type;
  int balance;
  public:
  void setdetails(string name,int accno,string type,int balance){
    this->name=name;
    this->accno=accno;
    this->type=type;
    this->balance=balance;
  }
  void deposit(int amount){
    if(amount>0){
      balance+=amount;
    }
    else cout<<"invalid"<<endl;
  }
  void withdraw(int amount){
    if(amount>0 && amount<=balance){
      balance-=amount;
    }
    else cout<<"invalid"<<endl;
  }
  void display_total(){
    cout<<"name : "<<name<<endl<<"balance : "<<balance<<endl;
  }
};
int main(){
  cout<<"Welcome to our bank"<<endl;
  int n;
  cout<<"Enter number of customer : ";
  cin>>n;
  customer a[n];
  string name,type;
  int accno,amount=0;
  for(int i=0;i<n;i++){
    cout<<endl;
    cout<<"Enter the details of customer :"<<i+1<<endl;
    cout<<"Enter name of the customer : ";
    cin>>name;
    cout<<"Enter account no : ";
    cin>>accno;
    cout<<"Enter type : ";
    cin>>type;
    a[i].setdetails(name,accno,type,amount);
    string need;
    cout<<"Enter 'deposit' if you want to deposit and 'withdraw' for withdraw :";
    cin>>need;
    if(need=="deposit"){
      cout<<"Enter amount : ";
      cin>>amount;
      a[i].deposit(amount);
    }
    else{
      cout<<"Enter amount : ";
      cin>>amount;
      a[i].withdraw(amount);

    } 
    a[i].display_total();
  }
  return 0;
}