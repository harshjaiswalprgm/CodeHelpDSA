#include <iostream>
using namespace std;
int main()
{
    int a; // sum of all odd number**
    cout << "enter the number :" << endl;
    cin >> a;
    int i = 2;
    int sum = 0;
    while (i <= a)
    {

        sum = sum + i;
        i = i + 2; //even number
        i = i + 1; //odd number
    }
    cout << "sum of odd no. is :" << sum << endl;
    return 0;
}
