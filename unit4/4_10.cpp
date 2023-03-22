#include <iostream>
#include <array>

int main(){

    using namespace std;
    array<double, 3> result;
    double average;

    cout << "Enter the result: ";
    cin >> result[0]; 
    cin >> result[1]; 
    cin >> result[2]; 

    average = (result[0] + result[1] + result[2])/3;
    cout << average;

    return 0;
}

