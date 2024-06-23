#include <iostream>
using namespace std;
// a to the power b
int calculatePower(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int finalAnswer = calculatePower(4, 2);
    cout << finalAnswer << endl;
    return 0;
}