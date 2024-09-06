#include<iostream>
using namespace std;
class invoice{
    string partnum;
    string partdesc;
    int qty;
    double price;
    public:
    invoice(string partnum,string partdesc,int qty,double price){
        this->partnum=partnum;
        this->partdesc=partdesc;
        this->qty=qty;
        this->price=price;
    }
    void setNum(string partnum){
        this->partnum=partnum;
    }
    void setDesc(string partdesc){
        this->partdesc=partdesc;
    }
    void setQty(int qty){
        this->qty=qty;
    }
    void setPrice(float price){
        this->price=price;
    }
    string getNum(){
        return partnum;
    }
    string getDesc(){
        return partdesc;
    }
    int getQty(){
        return qty;
    }
    double getPrice(){
        return price;
    }
    double getInvoiceAmount(int qty,double price){
        if(qty<0){
            qty=0;
        }
        if(price<0){
            price=0.0;
        }
        return double(qty*price);
    }
};
int main(){
    string partnum,partdesc;
    int qty;
    double price;
    cout<<"Enter the part number:";
    cin>>partnum;
    cout<<"Enter the part description:";
    cin>>partdesc;
    cout<<"Enter the quantity of the item being purchased:";
    cin>>qty;
    cout<<"Enter the price per item :";
    cin>>price;
    invoice a(partnum,partdesc,qty,price);
    a.setNum(partnum);
    a.setDesc(partdesc);
    a.setQty(qty);
    a.setPrice(price);
    cout<<"DETAILS : \n";
    cout<<a.getNum()<<endl;
    cout<<a.getDesc()<<endl;
    cout<<a.getQty()<<endl;
    cout<<a.getPrice()<<endl;
    double amount =a.getInvoiceAmount(qty,price);
    cout<<"Invoice amount : "<<amount;

    cout<<endl<<"Enter the new quantity :";
    int b;
    cin>>b;
    a.setQty(b);
    amount =a.getInvoiceAmount(b,price);
    cout<<"Invoice amount : "<<amount;
    return 0;
}