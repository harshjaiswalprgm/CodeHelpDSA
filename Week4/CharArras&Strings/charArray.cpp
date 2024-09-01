#include <iostream>
using namespace std;

int main()
{
    char arr[10];
    cout << "enter your name" << endl;
    // cin >> arr;  //It will terminate afte the space or tab or enter
   // cin.getline(arr, 100);// so this will take the whole input string / entire sentence


    //ok now using the delimiter 
    cin.getline(arr, 100, '\t');//this will take input until it will find out tab 
    
    //for example i write My name is harsh and    tab '\t'  after this
    // it is not gonna print  I did my graduation from LU.  Due to tab is found in middle of it.
    cout << arr << endl;


    //To know that the null key is present or not we typecast the characters to 
    //ASCII values let's seee

    cout << arr[0] << "->" << (int)arr[0] << endl;
    cout << arr[1] << "->" << (int)arr[1] << endl;
    cout << arr[2] << "->" << (int)arr[2] << endl;
    cout << arr[3] << "->" << (int)arr[3] << endl;
    cout << arr[4] << "Null character ->" << (int)arr[4] << endl;

    return 0;
}