#include<iostream>

void silly(const char*, int n = 0);

int main(void)
{
    using namespace std;

    char str[10] = "122323177";

    // call 1
    cout << "call 1" << endl;
    silly(str);
    // call 2
    cout << "call 2" << endl;
    silly(str);
    // call 3
    cout << "call 3" << endl;
    silly(str, 1);
    // call 4
    cout << "call 4" << endl;
    silly(str, 1);
    return 0;
}

void silly(const char* str, int n)
{
    using namespace std;

    static int times = 1;

    if (n)
        for (int i = 1; i <= times; ++i)
            cout << str << endl;
    else
        cout << str << endl;

    times++;
    cout << times << endl;
}
