#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canSortArray(int n, const vector<int>& a, const string& s) {
    vector<int> sortedA = a;
    sort(sortedA.begin(), sortedA.end());

    int start = 0;
    while (start < n) {
        int end = start;
        while (end < n - 1 && s[end] == '1') {
            end++;
        }

        vector<int> segment(a.begin() + start, a.begin() + end + 1);
        sort(segment.begin(), segment.end());

        for (int i = start; i <= end; ++i) {
            if (segment[i - start] != sortedA[i]) {
                return false;
            }
        }

        start = end + 1;
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    string s;
    cin >> s;

    if (canSortArray(n, a, s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
