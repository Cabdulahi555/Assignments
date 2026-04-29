/*Cabdulahi Hussein
Prof. Danish Khan
Assignment 10*/


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Graph using adjacency list
vector<int> adj[6]; // 6 vertices: 0=A, 1=B, 2=C, 3=D, 4=E, 5=F

void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

// Breadth First Search
void BFS(int start) {
    bool visited[6] = {false};
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << (char)('A' + node) << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

// Depth First Search
void DFS(int node, bool visited[]) {
    visited[node] = true;
    cout << (char)('A' + node) << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            DFS(neighbor, visited);
        }
    }
}

int main() {
    // Build the graph
    // A=0, B=1, C=2, D=3, E=4, F=5
    addEdge(0, 1); // A - B
    addEdge(0, 2); // A - C
    addEdge(1, 3); // B - D
    addEdge(1, 4); // B - E
    addEdge(2, 4); // C - E
    addEdge(3, 5); // D - F
    addEdge(4, 5); // E - F

    // Run BFS starting from A
    BFS(0);

    // Run DFS starting from A
    bool visited[6] = {false};
    cout << "DFS: ";
    DFS(0, visited);
    cout << endl;

    return 0;
}


/* Final Task:-
Both BFS and DFS have a time complexity of O(V + E), where V is the number of vertices and E is the number of edges. 
This is due to the both algorithms visit every vertex once and check every edge once. The difference is that BFS uses more 
memory because it stores all neighbors in a queue, while DFS uses less memory because it only tracks the current path. so theyre equally fast, just different in 
how they explore the graph.
*/

/*Output 
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-10> g++ .\graphs.cpp
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-10> ./a.exe
BFS: A B C D E F 
DFS: A B D F E C 
PS C:\Users\abdul\Desktop\VS\Assignments\CISC187\week-10> */