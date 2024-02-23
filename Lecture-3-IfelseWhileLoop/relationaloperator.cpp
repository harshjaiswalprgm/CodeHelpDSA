/*#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a > b);
    cout << second << endl;

    bool third = (a < b);
    cout << third << endl;

    bool fourth = (a >= b);
    cout << fourth << endl;

    bool fiveth = (a <= b);
    cout << fiveth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;

    return 0;
}
*/

// There are more operator's- (&&,||,!)  //Bitwise operator-

// #include<iostream>
// using namespace std;
// int main()
// {
//     //int a= 21;
//     int b = 0;
//     cout<<!b<<endl;
//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;

//     cout << "enter the first number :" << endl;
//     cin >> a;

//     cout << "enter the second number :" << endl;
//     cin >> b;
//     if (a > b)
//     {
//         cout << "a is greater :" << endl;
//     }
//     if (b > a)
//     {
//         cout << "b is greator :" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the number a :" << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "a is positive :" << endl;
    }
    else if (a < 0) // here we can use if inside the else but for better understanding we have to use if-elseif-else.
    {
        cout << "a is negative :" << endl;
    }
    else
    {
        cout << "a is zero :" << endl;
    }
    return 0;
}