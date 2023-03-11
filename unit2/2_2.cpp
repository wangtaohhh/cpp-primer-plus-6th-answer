#include <iostream>
int long_change(int);

int main()
{
    using namespace std;
    int long_input;
    cout << "please input long:";
    cin >> long_input;
    int long_output = long_change(long_input);
    cout << long_input << " long_input = " << long_output << " mile" << endl;
    return 0;

}


int long_change(int long_num)
{
    return long_num * 220;
}