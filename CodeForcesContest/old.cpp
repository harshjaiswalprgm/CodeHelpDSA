#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if the first and last elements are both greater than 0
        // If so, it's not possible to make all elements zero
        if (a[0] > 0 && a[n - 1] > 0) {
            cout << "NO" << endl;
            continue;
        }

        // Check the rest of the elements
        for (int i = 1; i < n - 1; ++i) {
            // If an element is greater than its adjacent elements, it's not possible
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                cout << "NO" << endl;
                goto next_test_case;
            }
        }

        cout << "YES" << endl;

        next_test_case:;
    }

    return 0;
}
