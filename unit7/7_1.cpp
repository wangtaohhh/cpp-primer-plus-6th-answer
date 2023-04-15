#include <iostream>

double cal_avg(double, double);

int main(){

    using namespace std;

    double x, y;
    double avg;

    cout << "Input two float: ";
    

    while ( (x != 0) && (y != 0) ){
        cin >> x;
        cin.get();
        cin >> y;
        cin.get();
        avg = cal_avg(x, y);
        cout << avg;
        cout << "Input again: ";
    }



}

double cal_avg(double x, double y){
    return 2.0 * x * y / (x + y);
}


