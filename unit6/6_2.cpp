#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<int, 10> num;
    char input_num;

    long sum = 0, n = 0;

    cout << "enter the num: ";

    while (n < 10){
        
        // num[n] = cin.get();
        cin >> input_num;


        if (isdigit(input_num)){
            sum += input_num - '0';

            cin.ignore();
            num[n] = input_num - '0';
            n++;
        }
        else {
            break;
        } 

    }
    int large_avg = 0;
    double average;
    average = sum / n;
    for (int i=0; i < n; i++) {

        if (num[i] > average){
            ++large_avg;
        }
    };

    cout << "large_avg" << large_avg << endl;
    cout << average;
    return 0;


}











