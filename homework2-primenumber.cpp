#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number :" << endl;
    int i = 2;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            //cout << "not prime :" << endl;
            cout<<"not prime for "<<i<<endl;
        }else{
            cout<<"prime for "<<i<<endl;
        }
        i = i + 1;
    }
    return 0;
}