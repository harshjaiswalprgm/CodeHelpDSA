#include <iostream>
using namespace std;
int main()
{

    // 2D array declarations
    int arr[3][3] = {
        {10, 20, 30},
        {30, 40, 50},
        {80, 90, 100}

    };

    // cout << arr[0][0];
    // for printing the array

    int rowSize = 3;
    int colSize = 3;

for
    printing..for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

return 0;
}