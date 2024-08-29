#include <iostream>
using namespace std;
#include<vector>
#include <algorithm>

void print(vector<int> &v)
{
    for (size_t i = 0; i < v.size(); i++)
        cout << " " << v[i] << " ";
    {
        /* code */
    }
}

bool mycomp(int &a, int &b){
    return a > b; // for decreasing order sorting
    // return a < b; // for increasing order
}
int main()
{
    vector<int> v = {20, 43, 20, 45, 44, 34};
    // sort(v.begin(), v.end()); //increasing order sorting
    //To sort in decreasing order
    sort(v.begin(), v.end(), mycomp);
     // ideccreasing order sorting

        print(v);

    return 0;
}