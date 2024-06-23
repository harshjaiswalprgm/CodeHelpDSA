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

// #include <iostream>
// #include<cmath>
// using namespace std;

// int decimalToBinaryMethod1(int n)
// {
//     // Division Method
//     int binaryno = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int bit = n % 2;
//         binaryno = bit*pow(10, i++) + binaryno;  //formula to print int integer-->>

//         n = n / 2;
//     }
//     return binaryno;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int binary = decimalToBinaryMethod1(n);
//     cout << binary << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int BitwiseMethod(int n)
// {
//                ------------------------------- // Division Method
//     int binaryno = 0;
//     int i = 0;
//     while (n > 0)
//     {
//         int bit = (n & 1);
//         binaryno = bit * pow(10, i++) + binaryno; // formula to print int integer-->>

//         n = n >> 1; right shift
//     }
//     return binaryno;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int binary = BitwiseMethod(n);
//     cout << binary << endl;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;

// int BinaryToDecimal(int n)
// {
//     // Division Method
//     int decimal = 0;
//     int i = 0;
//     while (n)
//     {
//         int bit = n % 10;
//         decimal = decimal + bit * pow(2, i++); // formula to print int integer-->>

//         n = n / 10;
//     }
//     return decimal;
// }
// int main()
// {
//     int binaryno;
//     cin >> binaryno;
//     cout << BinaryToDecimal(binaryno);

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int BinaryToDecimal(int binary)
{
    int decimal = 0;
    int i = 0;
    while (binary)
    {
        int bit = binary & 1;
        decimal = decimal + bit * pow(2, i++); // formula to print int integer-->>
        binary = binary / 10;
    }
    return decimal;
}
int main()
{
    int binary;
    cin >> binary;
    cout << BinaryToDecimal(binary);
   

    return 0;
}   