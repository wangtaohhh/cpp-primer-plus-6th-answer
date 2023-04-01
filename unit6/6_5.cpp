#include <iostream>

int main(){
    using namespace std;
    const double RATE_1 = 0.1;
    const double RATE_2 = 0.15;
    const double RATE_3 = 0.2;


    bool exit = false;
    long tax = 0;
    long income = 1;
    while ((income > 0) && (!exit)){
        cin >> income;
        if (income <= 5000) {
            tax = 0.0;
        } else if (income <= 15000 ) {

            tax = (income - 5000) * RATE_1;
        } else if (income <= 35000) {

            tax = (15000 - 5000) * RATE_1 + (income - 15000) * RATE_2;
        } else {
            tax = (15000 - 5000) * RATE_1 + (35000 - 15000) * RATE_2 + (income - 35000) * RATE_3;
        }

        cout << "Income = " << income << ", tax = " << tax << endl;
        cout << "Please enter your income again or enter a negative value to quit: ";
    }



    return 0;

}