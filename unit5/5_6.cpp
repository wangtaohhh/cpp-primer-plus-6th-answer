#include <iostream>
int main(){
    using namespace std;
    string months[12] = 
    {
        "Jan", "Feb", "Mar", "Apr", 
        "May", "Jun", "Jul", "Aug", 
        "Sep", "Oct", "Nov", "Dec"
    };

    int sale[3][12];
    double total = 0;
    int total_sales[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++){
        cout << "Enter sale num: " << endl;

        for (int j=0; j<12; ++j) {
            cout << months[j] << ": ";
            cin >> sale[i][j];

            total_sales[i] += sale[i][j];

        }

    }


    for (int i=0; i<3; ++i) {
        cout << i+1 << " year(s) total sales is " 
             << total_sales[i] << endl;
    };


    cout << "There years total sales is " 
         << total_sales[0] + total_sales[1] + total_sales[2] << endl;

    return 0;




}
