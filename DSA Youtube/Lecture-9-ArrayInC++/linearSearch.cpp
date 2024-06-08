#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{

    int arr[10] = {50, 54, 62, 35, 12, 13, 0, -5, -6, 1};
    cout << "enter the element that u r lookink for :" << endl;
    int key; // key is the element or no. which we r looking for:
    cin >> key;

    bool found = search(arr, 10, key);

    if (found)
    {
        cout << "key is present :" << endl;
    }
    else
    {
        cout << "key is absent :" << endl;
    }

    return 0;
};