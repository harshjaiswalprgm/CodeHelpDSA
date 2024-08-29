class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int s = 0;
        int e = n-1;

        while(s <= e) {
            int mid = s + (e-s)/2;
            if(arr[mid] == target) {
                return mid;
            }
            if(target > arr[mid] ){
                //right me jao
                s= mid + 1;
            }
            else if(target < arr[mid] ) {
                //left me jao 
                e = mid - 1;
            }
            // //ye main bhul jata hu
            // mid = s + (e-s)/2;
        }
        //agar main yaha pohoch gya
        //iska mtlb elemnt nahi mial
        //noit found -> return -1;
        return -1;
    }
};