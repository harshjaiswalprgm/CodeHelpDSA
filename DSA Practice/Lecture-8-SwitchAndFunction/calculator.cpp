#include <iostream>
using namespace std;
int main()
{
    int n, m;
    char oper;
   // cin>>n;
    cout << "enter the first number" << endl;
    cin >> n;
    cout << "enter the second number " << endl;
    cin >> m;
    cout << "enter the operation that u want to perform " << endl;
    cin >> oper;
    switch (oper)
    {
    case '+':
        cout << "addition is" << (n + m) << endl;
        break;

    case '-':
        cout << "substraction is" << (n - m) << endl;
        break;

    case '*':
        cout << "multiplication is" << (n * m) << endl;
        break;

    case '/':
        cout << "division is" << (n / m) << endl;
        break;

    case '%':
        cout << "modulo is" << (n % m) << endl;
        break;
    default:
        cout << "default case enter the correct input" << endl;
    };

    return 0;
}