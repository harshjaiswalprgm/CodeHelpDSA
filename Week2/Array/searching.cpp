#include <iostream>
using namespace std;

bool search2DArray(int arr[][3], int rowSize, int colSize, int target)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
        }
    return false;
}
int main()
{

    int arr[3][3] = {
        {10, 20, 30},
        {30, 40, 50},
        {80, 90, 100}

    };

    int rowSize = 3;
    int colSize = 3;
    int target = 880;
    bool found = search2DArray(arr, rowSize, colSize, target);
    cout << "answer is : " << found << endl;
    return 0;
}