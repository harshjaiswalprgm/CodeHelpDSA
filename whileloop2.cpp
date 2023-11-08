#include <iostream>
using namespace std;
int main()
{
    int a; // sum of n numbers**
    cout << "enter the number :" << endl;
    cin >> a;
    int i = 1;
    int sum = 0;
    while (i <= a)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "value of sum is :" << sum << endl; //for n entered number sum is**

    return 0;
}