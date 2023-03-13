#include <iostream>

int main(){
    using namespace std;
    cout << "Enter a latitude in degrees, minutes and seconds\n";
    int degree;
    cout << "enter a degree:";
    cin >> degree;
    int minutes;
    cout << "enter a minutes:";
    cin >> minutes;
    int seconds;
    cout << "enter a seconds:";
    cin >> seconds;
    // const int trans = 60;
    double degree_print = degree + minutes/60.0  + seconds/3600.0;
    cout << degree << " degrees " << minutes << " minutes " << seconds << " seconds " << "= " << degree_print << endl;
    return 0;
}


