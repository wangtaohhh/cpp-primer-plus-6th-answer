#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    char word[20];
    int word_num = 0;
    cout << "input a word: ";

    do 
    {
        cin >> word;
        if (strcmp(word, "done") != 0)
        {
            word_num ++;

        }
    }
    while (strcmp(word, "done") != 0);

    cout << "total " << word_num << " words";
    return 0;


}
