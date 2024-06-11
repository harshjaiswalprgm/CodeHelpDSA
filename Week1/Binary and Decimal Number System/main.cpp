// #include <iostream>
// using namespace std;

// int decimalToBinaryMethod1(int n)
// {
//     // Division Method
//     while (n > 0)
//     {
//         int bit = n % 2;
//         cout << bit << endl;
//         n = n / 2;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int binary = decimalToBinaryMethod1(n);
//     return 0;
// }

// To finding individualy bits--->>>>>>>

#include <iostream>
#include<cmath>
using namespace std;


int decimalToBinaryMethod1(int n)
{
    // Division Method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit*pow(10, i++) + binaryno;  //formula to print int integer-->>

        n = n / 2;
    }
    return binaryno;
}
int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    cout << binary << endl;
    return 0;
}