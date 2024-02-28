// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << " *";
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;

//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "enter the no. that u want to print the character" << endl;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "$";
            j = j + 1;
        }
        cout << endl;
        i = i + 1; 
    }
    return 0;
}