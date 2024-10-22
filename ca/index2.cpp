#include <iostream>
using namespace std;

// Function to preprocess the pattern and create the lps array
void computeLPSArray(string pattern, int m, int lps[]) {
    int length = 0;  // Length of the previous longest prefix suffix
    lps[0] = 0;      // lps[0] is always 0
    int i = 1;

    // Fill lps[] for the rest of the pattern
    while (i < m) {
        if (pattern[i] == pattern[length]) {
            length++;
            lps[i] = length;
            i++;
        } else {
            if (length != 0) {
                length = lps[length - 1];  // Use the previous lps value
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// KMP search function
void KMPSearch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    int lps[m];  // Array jo hold krega lps values

    // Preprocess the pattern to fill the lps array
    computeLPSArray(pattern, m, lps);

    int i = 0;  // Index for text
    int j = 0;  // Index for pattern

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            // Pattern found at index (i - j)
            cout << "Pattern found at index " << (i - j) << endl;
            j = lps[j - 1];  // Check for other occurrences
        } else if (i < n && pattern[j] != text[i]) {
            // Mismatch after j matches
            if (j != 0) {
                j = lps[j - 1];  // Use the lps to avoid unnecessary comparisons
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    KMPSearch(text, pattern);
    return 0;
}
