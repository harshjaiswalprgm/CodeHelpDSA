#include <iostream>
using namespace std;
void findShortestPaths(int dist[][100], int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                //agar koi path nahi hai
                if (dist[i][k] == -1 || dist[k][j] == -1) continue;

                // If no direct path between i and j, or find a shorter path
                if (dist[i][j] == -1 || dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
   }
} void displayDistances(int dist[][], int n) {
    cout << "Shortest distances between cities in a country :\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == -1) {
                cout << "no path is exist between cities and country  ";  
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;

   
    int dist[][];

    cout << "Enter the distances between cities (-1 for no direct path):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }

    // Find the shortest paths and display them
    findShortestPaths(dist, n);
    displayDistances(dist, n);

    return 0;
}
