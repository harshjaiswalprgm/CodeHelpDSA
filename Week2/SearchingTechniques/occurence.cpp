class Solution {
public:
    void findFirstOccurrence(vector<int> arr, int n, int target, int &ansIndex) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            //ans found -> may or may not be first occurence
            //store and compute
            ansIndex = mid;
            //kyoki first occurence ki baat hori h
            //toh batao left me jau first occ k liye ya right me 
            //left me jao
            e = mid - 1;
        }
        if(target > arr[mid] ) {
            ///right me jao
            s = mid + 1;
        }
        if(target < arr[mid]) {
            //left me jao 
            e = mid-1;
        }
        //ye main bhul jata hu
        mid = s + (e-s)/2;
    }
}

void findLastOccurrence(vector<int> arr, int n, int target, int &ansIndex) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            //target k equal toh hai
            //but may or may not be last occurrence
            //store and compute
            ansIndex = mid;
            //right me jao
            s = mid + 1;
        }
        if(target > arr[mid] ) {
            //right me jao
            s = mid+1;
        }
        if(target < arr[mid] ) {
            //left me jao 
            e = mid - 1;
        }
        //ye main bhul jata hu
        mid = s + (e-s)/2;
    }

}

    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();

        int firstOccIndex = -1;
        findFirstOccurrence(arr,n,target,firstOccIndex);

        int lastOccIndex = -1;
        findLastOccurrence(arr,n,target,lastOccIndex);

        vector<int> temp(2);
        temp[0] = firstOccIndex;
        temp[1] = lastOccIndex;
        return temp;
    }
};