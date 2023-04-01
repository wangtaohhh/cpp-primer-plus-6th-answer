/*
the program is wrong 
check https://stackoverflow.com/questions/46800729/using-cin-get-doesnt-seem-to-read-the-character-im-expecting-whats-wrong
*/
#include <iostream>
#include <array>

int main(){
    using namespace std;
    array<double, 10> num;
    char input_num;

    long sum = 0, n = 0;

    cout << "enter the num: ";

    while (n < 10){
        
        num[n] = cin.get();
        if (isdigit(num[n])){
            sum += num[n];
            n++;
            cin.ignore();
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
    }

    cout << large_avg << endl;
    cout << average;





}


