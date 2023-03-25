#include <iostream>
#include <string>
struct Car
{
    std::string company;
    int year; 
};


int main(){
    using namespace std;
    int car_num;

    cout << "how many cars do you have? ";
    cin >> car_num;
    cin.get();


    Car *car_info = new Car[car_num];
    for (int i=0; i<car_num; i++){
        cout << "your company: ";
        cin >> (car_info+i) -> company;  // car_info.company


        cout << "your year: ";
        cin >> (car_info+i) -> year;

    }

    for (int i=0; i < car_num; ++i) {
        cout << car_info[i].year << " " << car_info[i].company << endl;
    }
    delete [] car_info;
    return 0;
}