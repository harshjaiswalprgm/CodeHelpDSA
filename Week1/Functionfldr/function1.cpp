#include <iostream>

using namespace std;

int getMultiplication(int x, int y, int z)
{
    int result = x * y * z;
    return result;
}

void printNameTenTimes()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << "Harsh" << endl;
    }
}

void printmultiple(int num)
{
    for (int i = 0; i <= 10; i++)
    {
        cout << num * i << endl;
    }
}

int convertIntoCelcius(int far)
{
    int celcius = (far - 32) * 5 / 9;
    return celcius;
}

int main()
{
    int multiplicationAns = getMultiplication(5, 3, 4);
    cout << multiplicationAns << endl;

    printNameTenTimes();
    printmultiple(8);

    int far = 42;
    int ans = convertIntoCelcius(far);
    cout << "In Celcius : " << ans;
    return 0;
}