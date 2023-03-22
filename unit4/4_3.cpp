#include <iostream>
#include <cstring>

int main(){

    using namespace std;
    char first_name[20];
    char last_name[20];

    char print_name[50];

    cout << "Enter your first name: ";
    cin.getline(first_name, 20);

    cout << "Enter your last name: ";
    cin.getline(last_name, 20);

    strcpy(print_name, first_name);
    strcat(print_name, ",");
    strcat(print_name, last_name);

    cout << print_name;
    return 0;
    



}


