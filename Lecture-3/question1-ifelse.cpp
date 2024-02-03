#include <iostream>
using namespace std;
int main()
{
    int f;
    cout<<"enter the number :"<<endl;
    cin>>f;
    if (f == 9)
    {
        cout << " nine " << endl;
    }
    else if (f > 0)
    {
        cout << "number is positive :" << endl;
    }
    else
    {
        cout << "number is zero :" << endl;
    }
    return 0;
}