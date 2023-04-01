#include <iostream>
#include <cctype>

int main(){

    using namespace std;
    char ch;

    cout << "enter the character: ";
    while ((ch = cin.get()) != '@')  // must use ''
    {
        if (isdigit(ch)) {
            continue;
        }
        else if (islower(ch)) {
            ch = toupper(ch);

        }
        else if (isupper(ch)) {
            ch = tolower(ch);
        }
        cout << ch;
    }
    return 0;




}