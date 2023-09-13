#include <iostream>
#include <vector>
using namespace std;

// Undirected graph stored using adjency matrix

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1][n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1;
    }
    return 0;
}


// Undirected graph stored using adjency list
/*
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    return 0;
}
*/

// Directed graph stored using adjency list
/*
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);

        // a[v].push_back(u);
    }
    return 0;
}
*/


// Undirected graph stored using adjency matrix with weights
/*
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n + 1][n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        a[u][v] = weight;
        a[v][u] = weight;
    }
    return 0;
}
*/

// Undirected graph stored using adjency list with weights
/*
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        a[u].push_back({v, weight});
        a[v].push_back({u, weight});
    }
    return 0;
}
*/

// Directed graph stored using adjency list
/*
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        a[u].push_back({v, weight});

        // a[v].push_back({u, weigth});
    }
    return 0;
}
*/

