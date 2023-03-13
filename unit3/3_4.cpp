#include <iostream>

int main(){
    using namespace std;
    cout << "Enter a latitude in degrees, minutes and seconds\n";
    int day;
    cout << "enter a day:";
    cin >> day;
    int hour;
    cout << "enter a hour:";
    cin >> hour;
    int minutes;
    cout << "enter a minutes:";
    cin >> minutes;
    // const int trans = 60;
    int seconds;
    cout << "enter a seconds";
    cin >> seconds;
    int degree_print = day * 86400  + hour * 3600  + minutes * 60 + seconds;
    cout << day << " days " << hour << " hour " << minutes << " minutes " << seconds << " seconds " << degree_print << endl;
    return 0;
}