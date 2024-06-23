#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "harsh enter your age: ";
    cin >> age;

    if (age < 18)
    {
        cout << "harsh are a minor." << std::endl;
    }

    if (age >= 18 && age <= 65)
    {
        cout << "harsh are an adult." << std::endl;
    }

    if (age > 65)
    {
        cout << "harsh are a senior citizen." << std::endl;
    }

    return 0;
}