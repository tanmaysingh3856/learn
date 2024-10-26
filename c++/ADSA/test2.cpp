#include <iostream>
using namespace std;

struct Edge {
    int u, v, cost;
};

void sortEdges(Edge edges[], int E) {
    for (int i = 0; i < E - 1; ++i) {
        for (int j = 0; j < E - i - 1; ++j) {
            if (edges[j].cost > edges[j + 1].cost) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int find(int parent[], int i) {
    if (parent[i] != i) {
        parent[i] = find(parent, parent[i]);
    }
    return parent[i];
}

void union_sets(int parent[], int rank[], int u, int v) {
    int root_u = find(parent, u);
    int root_v = find(parent, v);
    if (root_u != root_v) {
        if (rank[root_u] > rank[root_v]) {
            parent[root_v] = root_u;
        } else if (rank[root_u] < rank[root_v]) {
            parent[root_u] = root_v;
        } else {
            parent[root_v] = root_u;
            rank[root_u]++;
        }
    }
}

int main() {
    int N;
    cin >> N;
    int cost[N][N];
    Edge edges[N * (N - 1) / 2];
    int E = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> cost[i][j];
            if (i < j && cost[i][j] != 0 && cost[i][j] != 9999) {
                edges[E++] = {i, j, cost[i][j]};
            }
        }
    }

    sortEdges(edges, E);

    int parent[N];
    int rank[N] = {0};
    for (int i = 0; i < N; ++i) {
        parent[i] = i;
    }

    for (int i = 0; i < E; ++i) {
        int u = edges[i].u;
        int v = edges[i].v;
        if (find(parent, u) != find(parent, v)) {
            cout << u + 1 << " -> " << v + 1 << endl;
            union_sets(parent, rank, u, v);
        } else {
            // Do nothing if u and v are already in the same set
        }
    }

    return 0;
}