#include <iostream>

int main(){
    using namespace std;
    long us_population;
    cout << "enter us population";
    cin >> us_population;
    long world;
    cout << "enter world population";
    cin >> world;

    double percent = double(us_population) / double(world);
    cout << percent * 100 << "%" << endl;
    return 0; 



}