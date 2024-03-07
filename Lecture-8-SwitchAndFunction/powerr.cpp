#include <iostream>
using namespace std;

int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}
int main()
{

    int ans = power(); // calling the function...
    cout << "answer is " << ans;

    return 0;
}

// insted of writng again aagain code we use function to better understanding and optimise the code.
// we can optimise our code by did't paas the value in function insted of declearing data inside the function body;
// this can reduse the line of code.
/*#include<iostream>
using namespace std;

int power(int num1, int num2) {

    //cout << a <<endl;

    int ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }

    return ans;
}
int main()
{
    int c , d;
    cin>> c >> d;

    int answer = power(c,d);
    cout << " answer is " << answer << endl;

    return 0;
}*/