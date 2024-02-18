// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"enter the value of n"<<endl;
//     cin>>x;
//     for(int i=2; i<x; i++){

//         //reminder=0 not a prime number
//         if (x%i==0){
//             cout<<"not a prime number"<<endl;
//             break;
//         }
//         else{
//             cout<<"it's a prime number"<<endl;
//             break;      //break; ka bhai continue;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int x;

    cout << "enter the value of n" << endl;

    cin >> x;
    bool isPrime = 1;
    for (int i = 2; i < x; i++)
    {

        // reminder=0 not a prime number
        if (x % i == 0)
        {
            //  cout << "not a prime number" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "not a Prime no." << endl;
    }
    else
    {
        cout << "is a Prime no." << endl;
    }
    return 0;
}
