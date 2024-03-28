#include <iostream>
#include <vector>
using namespace std;

int rakshaBandhan(vector<int> arr, int n) {
    sort(arr.begin(),arr.end());
    int i=n-1;
    long long sum=0;
    int count =0;
    while(i>=0){
        sum+=arr[i];
        if(sum<=0){
            break;

        }
        count++;
        i--;
    }
    return count;
}