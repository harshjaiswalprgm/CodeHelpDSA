#include <iostream>
using namespace std;
void printN_kaTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
}
int main()
{
    printN_kaTable(5);
    return 0;
}