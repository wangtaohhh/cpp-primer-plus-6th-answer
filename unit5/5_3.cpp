#include <iostream>

int main(){

    using namespace std;
    double sum = 0;
    double num = 0;

    while (1)
    {
        cout << "input your number (0 to exit): ";
        cin >>  num;

        if (num == 0){
            break;
        };
        sum += num;

        cout << "now is " << sum;
        


    }
    return 0;
    
        



}


