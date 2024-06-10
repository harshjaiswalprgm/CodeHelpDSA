// #include <iostream>
// using namespace std;
// void printCounting(){
//         for (int i = 0; i < 5; i++){
//             cout << i << endl;
//         }
//     }
// int main()
// {
//     printCounting();
//     // cout << "Harsh" << endl;
//     return 0;
// }

//-->> it is a normanl function call in order.

#include <iostream>
using namespace std;

void printCounting();
int main()
{
    printCounting();
    // cout << "Harsh" << endl;
    return 0;
}
void printCounting()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
}
//-->> In this we first declare declare the function above the main and call after the main function.