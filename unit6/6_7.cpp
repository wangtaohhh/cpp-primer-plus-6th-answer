#include <iostream>
#include <cctype>
#include <string>

int main(){
    using namespace std;

    unsigned int vowels = 0;
    unsigned int consonants = 0;
    unsigned int other = 0;
    string input_str;

    cout << "Enter word (q to quit): " << endl;

    bool exit = true;
    while (exit) {
        cin >> input_str;
        cin.get();
        if (input_str == "q") {   // must be ""
            break;
        }

        else if (!isalpha(input_str[0])){
            other++;

        } 
        else if (isalpha(input_str[0])){
            switch(toupper(input_str[0])) {

                case 'A':;
                case 'E':;
                case 'I':;
                case 'O':;
                case 'U':
                    ++vowels;
                    break;

                default:
                    ++consonants;
                    break;
            }
        } 
        
    }
}













