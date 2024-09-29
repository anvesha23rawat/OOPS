/*
Practical No. 11

Imagine a tollbooth with a class called TollBooth. The two data items are of type 
unsigned int and double to hold the total number of cars and total amount of money 
collected. A constructor initializes both of these data members to 0. A member function
called payingCar( )increments the car total and adds 0.5 to the cash total. Another 
function called nonPayCar( ) increments the car total but adds nothing to the cash total. 
Finally a member function called display( )shows the two totals. Include a program to test
this class. This program should allow the user to push one key to count a paying car and 
another to count a non paying car. Pushing the ESC key should cause the program to print
out the total number of cars and total cash and then exit.

Source Code:

*/
#include <iostream>
#include <windows.h> // Include windows.h for GetAsyncKeyState

using namespace std;

class tollbooth {
private:
    unsigned int total_number_of_cars;
    double total_amount_of_money;
    int paying_car;
    int non_paying_Car;

public:
    tollbooth(unsigned int total_number_of_cars, double total_amount_of_money) {
        this->total_number_of_cars = total_number_of_cars;
        this->total_amount_of_money = total_amount_of_money;
    }

    void setPaying_car(int paying_car) {
        this->paying_car = paying_car;
        total_number_of_cars += paying_car;
        total_amount_of_money += paying_car * 0.5;
    }

    void setNon_paying_Car(int non_paying_car) {
        this->non_paying_Car = non_paying_car;
        total_number_of_cars += non_paying_car;
    }

    void display() {
        cout << "Total number of cars: " << total_number_of_cars << endl;
        cout << "Total amount of cash: " << total_amount_of_money << endl;
    }
};

int main() {
    tollbooth t1(0, 0);
    int paying_car;
    int non_paying_car;

    cout << "Number of paying cars: ";
    cin >> paying_car;
    t1.setPaying_car(paying_car);

    cout << "Number of non-paying cars: ";
    cin >> non_paying_car;
    t1.setNon_paying_Car(non_paying_car);

    cout << "Press ESC to display the command" << endl;

    
    while (true) {
        if (GetAsyncKeyState(VK_ESCAPE)) {
            t1.display();
            break; 
        }
        Sleep(100);
    }
    return 0;
}
