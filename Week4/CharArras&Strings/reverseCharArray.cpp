#include <iostream>
using namespace std;
void reverseCharArray(char arr[], int n)
{
    int len = getLength(arr, n);

    int i = 0;
    int j = len - 1;

    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
int main()
{
    
    return 0;
}