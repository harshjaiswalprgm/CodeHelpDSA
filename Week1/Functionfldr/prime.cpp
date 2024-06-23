#include <iostream>
using namespace std;
bool isPrime(int number)
{
    for (int i = 2; i <= (number - 1); i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    // agar yhaa tak aagye to prime no. ho
    return true;
}
int main()
{
    bool ans = isPrime(111);
    if (ans == true)
    {
        cout << "NoisPrime" << endl;
    }
    else
    {
        cout << "NoisNotPrime" << endl;
    }
    return 0;
}