#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number :"<<endl;
    cin >> a;
    int i = 1;
    while (i <= a)
    {
        cout << i<<" ";
        i = i + 2;
    }

    return 0;
}
