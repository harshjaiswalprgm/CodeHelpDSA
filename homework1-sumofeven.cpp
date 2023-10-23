#include <iostream>
using namespace std;
int main()
{
    int s;
    cout << "enter the number :" << endl;
    cin >> s;
    int sum;
    int i = 0;
    int temp = 0;
    while (i <= s)
    {

        if (s % 2 == 0)
        {
            int temp = 0;
            temp += s;
        }

        i = i + 2;
    }

    cout << temp << endl;
    return 0;
}