//question 3 : concept of data abstraction using the concept of class and objects
#include<iostream>
using namespace std;
class employee{
    int Eid;
    string Name;
    float Salary;
    string Company_name;
    public:
    void set_eid(int a){
        Eid=a;
    }
    void set_name(string b){
        Name=b;
    }
    void set_salary(float c){
        Salary=c;
    }
    void set_companyname(string d){
        Company_name=d;
    }
    int get_Eid(){
        return Eid;
    }
    string get_Name(){
        return Name;
    }
    float get_Salary(){
        return Salary;
    }
    string get_Companyname(){
        return Company_name;
    }
    void display(){
        cout<<Eid<<" "<<Name<<" "<<Salary<<" "<<Company_name<<" "<<endl;
    }
};
int main(){
    employee a1;
    a1.set_eid(101);
    a1.set_name("Anvesha");
    a1.set_salary(80000.67);
    a1.set_companyname("Amazon");
    cout<<"Employee id : "<<a1.get_Eid()<<endl;
    cout<<"Employee name : "<<a1.get_Name()<<endl;
    cout<<"Employee salary : "<<a1.get_Salary()<<endl;
    cout<<"Employee company name :"<<a1.get_Companyname()<<endl;
    a1.display();
  return 0;
}