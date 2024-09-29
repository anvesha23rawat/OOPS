/*
Practical No. 16

Using the concept of operator overloading. Implement a program to overload
the following:
With the help of friend function
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement

Source Code:

*/ 








// #include<iostream>
// using namespace std;
// class overload{
//     int x;
//     public:
//     overload(){

//     }
//     overload(int x){
//         this->x=x;
//     }
//     void show(){
//         cout<<x<<endl;
//     }
//     friend void operator -(overload);
//     friend void operator ++(overload);
//     friend void operator ++(overload);
//     friend void operator --(overload);
//     friend void operator --(overload);
// };
// overload operator -(overload d){
//     d=(d.x)*(-1);
// }
// overload operator ++(overload &x){
//     x+=1;
// }
// overload operator ++(overload &x,int no_use){
//     x+=1;
// }
// overload operator --(overload &x){
//     x-=1;
// }
// overload operator --(overload &x ,int no_use){
//     x-=1;
// }

// int main(){
//     overload d1(5);
//     cout<<"unary- : ";
//     -d1;
//     d1.show();
//     cout<<"unary++ pre : ";
//     ++d1;
//     d1.show();
//     cout<<"unary++ post : ";
//     d1++;
//     d1.show();
//     cout<<"unary-- pre : ";
//     --d1;
//     d1.show();
//     cout<<"unary-- post : ";
//     d1--;
//     d1.show();
//     // cout<<"unary- : ";
//     // -d1;
//     // d1.show();
//     return 0;
// }



#include<iostream>
using namespace std;

class sum1{
    public:
    int n;
    sum1(){

    }
    sum1(int n){
        this -> n = n;
    }
    sum1 operator-(){
        sum1 c3;
        return c3 = (-1)*n;

    } 
    sum1 show(){
        cout<<n<<endl;
        return 1;
    }
    friend sum1 operator++(sum1&c);
    friend sum1 operator++(sum1&c,int);
    friend sum1 operator--(sum1&c);
    friend sum1 operator--(sum1&c,int);
};
sum1  operator++(sum1&c){       
    c.n++;
    return 1;
}
sum1 operator++(sum1&c , int ){
    ++c.n;
    return 1;  
}
sum1 operator--(sum1&c,int){
    c.n--;
    return 1;
}
sum1 operator--(sum1&c){
    --c.n;
    return 1;
}

int main(){
    sum1 c1(1);
    sum1 c3 =-c1;

    cout << "unary : ";
    c3.show();

    cout << "preincrementS :  ";
    ++c1;
    c1.show();

    cout << "post-increment : ";
    c1++;
    c1.show();

    cout << "predecrement : ";
    --c1; 
    c1.show();

    cout << "postdecrement : ";
    c1--; 
    c1.show();
}



