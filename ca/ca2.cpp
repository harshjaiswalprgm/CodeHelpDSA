#include<iostream>
using namespace std;


void dsaCa2(vector<vector<int>>& graph, int V) 
    vector<vector<int>> dist = graph;

    // Updating distance through the shortest path jo paas hai
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

   int main() {
    int V; 
    cout << "Enter the number of vertices: ";
    cin >> V;

    // Graph input
    vector<vector<int>> graph(V, vector<int>(V));

    cout << "Enter the adjacency matrix (enter " << INF << " for no direct path):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    dsaCa2(graph, V);

    return 0;
}

// An airline company operates flights between multipule airpots, where the travel time between two airpotes may vry based on distance, flight frequency, and layovers.
// The company wnats to offer its passengers an optimized travel experience by calculating the shortest total time between any two airports, 
// Use all pair shortest flight times between every pair of airportes in the network, considering both direcct and connecting flights.
// lsdfkjslfksdjflskdj



