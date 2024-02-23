#include <iostream>
using namespace std;
int main()
{

    int a = 2;
    int b = 3;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a >= b);
    cout << second << endl;

    bool third = (a <= b);
    cout << third << endl;

    bool fourth = (a > b);
    cout << fourth << endl;

    bool fiveth = (a < b);
    cout << fiveth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;

    int x = 22;
    cout << !x<<endl;

    int y = 0;
    cout << !y;

    
    return 0;
}