#include <iostream>
using namespace std;

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i= 0; i < n; i++)
        if (num[i] < min)
        {
            min = num[i];
        }
}

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i= 0; i < n; i++)
        if (num[i] > max)
        {
            max = num[i];
        }
}
int main()
{

    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
        cout<<"max is :"<<getMax(num, size);
        cout<<"min is :"<<getMin(num, size);
    }
}