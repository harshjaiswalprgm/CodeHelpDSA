#include <iostream>
using namespace std;
int calculateTotalSum(int a, int l, int n)
{
    int sum = ((n) * (a + l) / 2);
    return sum;
}
int main()
{
    int sum = calculateTotalSum(2, 10, 5);
    cout << sum << endl;
    return 0;
}