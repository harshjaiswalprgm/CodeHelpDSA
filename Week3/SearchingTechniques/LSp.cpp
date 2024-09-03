#include <iostream>
using namespace std;

bool findTarget(int arr[], int size, int target)
{

    // tarversing krenge
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    // int size = 8;
    // int target = 40;
    // bool ans = findTarget(arr, size, target);
    int arr[10];
    int size;
    cout<<"enter the size of an array"<<endl;
    cin >> size;

    for (int i = 0; i < size; i++){
        cout << "enter the value of the index " << i << endl;
        cin >> arr[i];

    }
    int target;
    cout << "enter the target " << endl;
    cin >> target;

    bool ans = findTarget(arr, size, target);
    cout<< "Target is : " << ans << endl;
    return 0;
}