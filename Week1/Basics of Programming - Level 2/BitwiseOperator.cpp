#include <iostream>
using namespace std;
int main()
{
    cout << (5 & 3) << endl;
    cout << (5 | 3) << endl;
    cout << ~(5) << endl;
    cout << (5 ^ 5 ^ 9) << endl;
    cout << (25 << 2) << endl;
    cout << (10 << 1) << endl;
    cout << (-10 >> 1) << endl;
    return 0;
}