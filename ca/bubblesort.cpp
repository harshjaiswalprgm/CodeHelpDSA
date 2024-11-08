// // i have to write the bubble sort program which is also checking that given elemnet is sorted in order agar nahi then sort them agar yes return the result
// #include<iostream>
// using namespace std;

// int bubbleSort(int arr[], int n) {
//     int swapped;
//     for (int i = 0; i < n - 1; i++) {
//         swapped = 0;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = 1;
//             }
//         }
//         if (swapped == 0)
//         {
//             break;
//         }
//         // After each pass, the largest element 'bubbles' to the end of the array.
//         // So, we reduce the size of the unsorted array by one in each pass.
//     }
//     return 0;
//     }
//     // Testing the bubbleSort function
//     int main() {
//         int arr[] = {4, 6, 8, 1, 9, 5};
//         int n = sizeof(arr) / sizeof(arr[0]);
//         bubbleSort(arr, n);
//         cout << "Sorted array: \n";
//         for (int i = 0; i < n; i++)
//             cout << arr[i] << " ";
//         return 0;
//     }


// what about when if it is already sorted 

//     int arr[] = {1, 2, 3, 4, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     cout << "Sorted array: \n";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
        
// the bubble sort function will not do anything because it will not find any swaps in the array,  then array remains unchanged.

// So, the function will return 0 when the array is already sorted. If the array is not sorted, the function will return 1.

// The time complexity of bubble sort is O(n^2) because in each pass, we have to go through the array and find the largest element. So, for n elements, it will take n^2 passes.

//Implement bubble sort and return the number of swaps made during the sorting process.Also Add an optimization to stop the sorting process early if no swaps are made in an iteration.

#include<iostream>
using namespace std;

int bubbleSort(int arr[], int n) {
    int swapped;
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
                swaps++;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
    return swaps;
}
int main() {
    //int arr[] = {15, 18, 9, 21, 16, 5};

    int arr[] = {2, 5, 8, 15, 21, 29}; // already sorted array hai ye wala 

    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps = bubbleSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nNumber of swaps occure by swapping : " << swaps << endl;
    return 0;
}


