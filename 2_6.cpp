#include <iostream>

double light_years();

int main(){
    light_years();
    return 0;
}

double light_years(){
    using namespace std;
    double light_years;
    cout << "number of light years:";
    cin >> light_years;
    cout << light_years << " light years = " << light_years * 63240 << " au";
}


