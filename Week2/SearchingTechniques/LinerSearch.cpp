#include <iostream>
using namespace std;

bool targetFound(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        int currentElement = arr[i];
        if (currentElement == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 30;
    bool found = targetFound(arr, size, target);
    cout << found << " ";

    // This is the basic way to find the element;

    // Now let's take the input by the user end & then we will find the element!

    // int arr[100];
    // int size;
    // cout << "Enter the no. of elements in the Array" << endl;
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the input value for the index : " << i << endl;
    //     cin >> arr[i];
    // }
    // int target;
    // cout << "Enter the target which You are looking for" << endl;
    // cin >> target;

    // bool ans = targetFound(arr, size, target);
    // cout << ans << " ";
    return 0;
}