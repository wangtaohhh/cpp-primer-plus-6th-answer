#include <iostream>
#include <string>

int main(){
    using namespace std;
    string first_name, last_name;
    string print_string;

    cout << "enter your first name: ";
    getline(cin, first_name);

    cout << "enter your last name: ";
    getline(cin, last_name);
    print_string = first_name + ", " + last_name;

    cout << "Here's the information in a single string: " << print_string << endl;
    return 0;
}

