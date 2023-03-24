#include <iostream>

int main(){

    using namespace std;
    int num_1, num_2;
    int s = 0;
    cout << "Enter the first number: ";
    cin >> num_1;

    cout << "Enter the second number: ";
    cin >> num_2;
    for (int i=num_1; i <= num_2; i++){
        s += i;
    }
    cout << "The sum is: " << s;
    return 0;

}











