#include <iostream>
using namespace std;
int main()
{

    int n1 = 0, n2=1, n3;
    int i, n;
    cout<<"Enter a number upto u want to iterate :"<<endl;
    cin>>n;
    cout << n1 << n2;
    for (i = 1; i <= n; i++)    //(i=1; i<=10; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3;
    }

    return 0;
}