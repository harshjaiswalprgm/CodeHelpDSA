#include <iostream>
#include <vector>
using namespace std;

int rakshaBandhan(vector<int> arr, int n) {
    sort(arr.begin(),arr.end());// sorting the array from start to end
    int i=n-1;
    long long sum=0;
    double sum = i+1;
    int count =0;
    while(i>=0){
        sum+=arr[i]; //here i m adding the arrty size with sum

        if(sum<=i){
            break;

        }
        count++;
        i--;
    }
    return count;
}