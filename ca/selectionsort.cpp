//implement selection sort and return the number of comparisons made during the sorting process.

#include <iostream>

using namespace std;

int selectionSort(int arr[], int n) {
    int comparisons = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
    return comparisons;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons = selectionSort(arr, n);
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nNumber of comparisons: " << comparisons;
    return 0;

};