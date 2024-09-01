#include <iostream>
using namespace std;

int main()
{
    char arr[10];
    cout << "enter your name" << endl;
    cin >> arr;
    cout << "Your name is " << arr << endl;


    //To know that the null key is present or not we typecast the characters to 
    //ASCII values let's seee

    cout << arr[0] << "->" << (int)arr[0] << endl;
    cout << arr[1] << "->" << (int)arr[1] << endl;
    cout << arr[2] << "->" << (int)arr[2] << endl;
    cout << arr[3] << "->" << (int)arr[3] << endl;
    cout << arr[4] << "Here we print zero=>" << (int)arr[4] << endl;

    return 0;
}