#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), t(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    int natural_awake_sum = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] == 1) {
            natural_awake_sum += a[i];
        }
    }

    int min_sum = INT_MAX;
    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        if (t[i] == 1) {
            current_sum += a[i];
        }
    }
    min_sum = min(min_sum, current_sum);

    for (int i = k; i < n; i++) {
        if (t[i] == 1) {
            current_sum += a[i];
        }
        if (t[i - k] == 1) {
            current_sum -= a[i - k];
        }
        min_sum = min(min_sum, current_sum);
    }

    int max_diff = natural_awake_sum + accumulate(a.begin(), a.end(), 0) - min_sum;
    cout << max_diff << endl;

    return 0;
}