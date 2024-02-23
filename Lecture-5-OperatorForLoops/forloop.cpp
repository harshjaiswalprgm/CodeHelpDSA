#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n : " << endl;
    cin >> n;
    cout << "printing count from 1 to n : " << endl;
    int i = 1;
    for (;;) // for(int i=0; i<=n; i++)
    //we can use multiple variable inside the for loop..
    //for(a=0;, b=1, c=2, a>=0 && b>=1 && c>=2, a--, b--, c--){ // }
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }

        i++;
    }
    return 0;
}