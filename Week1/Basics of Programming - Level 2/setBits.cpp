#include <iostream>
using namespace std;
int main()
{
    int number = 15;
    int setBitCount = 0;
    while (number != 0)
    {
        int lastbit = (number & 1);
        if (lastbit == 1)
        {
            setBitCount = setBitCount + 1;
        }
        // right<Shift
        number = number >> 1;
    }
    cout << "total number of setBits: " << setBitCount << endl;
    return 0;
} 