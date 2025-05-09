#include <bits/stdc++.h>
using namespace std;
const int n = 100;
vector<pair<int, int>> v[n];
int dis[n];

void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;
        for (pair<int, int> child : v[node])
        {
            int childnode = child.first;
            int childcost = child.second;
            if (childcost + cost < dis[childnode])
            {
                dis[childnode] = cost + childcost;
                q.push({childnode, dis[childnode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }
    memset(dis, INTMAX_MAX, sizeof(dis));
    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }
    return 0;
}