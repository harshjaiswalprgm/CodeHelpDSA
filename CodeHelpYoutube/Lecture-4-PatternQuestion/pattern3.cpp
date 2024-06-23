#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j; // cout<<n-j+1; to print the reverce
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    /*int i = 6;
    ///out << i++;
    cout<<++i;  //pre-increnment
*/
    return 0;
}