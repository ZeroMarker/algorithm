#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Define the graph as an adjacency list
typedef pair<int, int> iPair;
vector<vector<iPair>> graph;

// Dijkstra's algorithm function
void dijkstra(int start) {
    int n = graph.size();
    vector<int> distance(n, INT_MAX);

    // Priority queue to store vertices and their distances
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;

    // Push the starting vertex with distance 0 to the priority queue
    pq.push({0, start});
    distance[start] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int weight = neighbor.second;

            // If a shorter path is found, update the distance
            if (distance[u] + weight < distance[v]) {
                distance[v] = distance[u] + weight;
                pq.push({distance[v], v});
            }
        }
    }

    // Print the shortest distances from the start vertex
    cout << "Shortest distances from vertex " << start << ":\n";
    for (int i = 0; i < n; ++i) {
        cout << "To vertex " << i << ": " << distance[i] << "\n";
    }
}

int main() {
    // Initialize the graph with vertices and their corresponding edges and weights
    int vertices = 5;
    graph.resize(vertices);

    // Example edges and weights
    graph[0].push_back({1, 2});
    graph[0].push_back({2, 4});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 7});
    graph[2].push_back({4, 3});
    graph[3].push_back({4, 1});

    int startVertex = 0;
    dijkstra(startVertex);

    return 0;
}

