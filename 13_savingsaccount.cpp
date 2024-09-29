
/*
Practical No. 13

Create class SavingsAccount. Use a static variable annualInterestRate to store the annual
interest rate for all account holders. Each object of the class contains a private instance
variable savingsBalance indicating the amount the saver currently has on deposit. Provide 
method calculateMonthlyInterest() to calculate the monthly interest by multiplying the 
savingsBalance by annualInterestRate divided by 12.This interest should be added to 
savingsBalance. Provide a static method modifyInterestRate() that sets the annualInterestRate
to a new value. Write a program to test class SavingsAccount. Instantiate two savings Account
objects, saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. 
Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances
for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest 
and print the new balances for both savers.


Source Code:

*/
#include <iostream>

using namespace std;

class savingAccount {
private:
    double monthly_interest;
    static double annual_Interest_Rate;
    int saving_balance;

public:
    savingAccount(int deposit, double interest) {
        this->saving_balance = deposit;
        annual_Interest_Rate = interest;
    }

    void setMonthly_interest() {
        monthly_interest = (saving_balance * annual_Interest_Rate) / 12;
    }

    void display() {
        cout << "Monthly interest rate at " << annual_Interest_Rate << " is " << monthly_interest << endl;
    }

    static void modifyInterestRate() {
       annual_Interest_Rate = annual_Interest_Rate ;
    }
};

double savingAccount::annual_Interest_Rate = 0.0;

int main() {
    savingAccount s1(2000, 0.04);
    s1.setMonthly_interest();
    s1.display();

    savingAccount s2(4000, 0.05);
    s2.setMonthly_interest();
    s2.display();

    return 0;
}
