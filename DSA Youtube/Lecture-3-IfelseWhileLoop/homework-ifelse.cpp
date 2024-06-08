#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "enter the character or number:" << endl;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "this is upper case :" << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "this is lower case :" << endl;
    }

    else if (a >= '0' && a <= '9')
    {
        cout << "this is digit :" << endl;
    }

    return 0;
}