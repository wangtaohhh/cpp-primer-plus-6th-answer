#include <iostream>
#include <string>

int main(){
    using namespace std;
    string months[12] = 
    {
        "Jan", "Feb", "Mar", "Apr", 
        "May", "Jun", "Jul", "Aug", 
        "Sep", "Oct", "Nov", "Dec"
    };

    int sale[12];
    
    double total = 0;

    for (int i=0; i < 12; i++) {
        cout << "enter the sale: " << months[i];
        cin >> sale[i];
        total += sale[i];

    };

    cout << "total is: " << total;
    return 0;
        
}