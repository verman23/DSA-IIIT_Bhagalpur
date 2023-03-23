#include <bits/stdc++.h>
using namespace std;
vector<int> topoSort(int V, vector<int> adj[])
{
    vector<int> indegree(V, 0);

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indegree[it]++;
        }
    }

    vector<int> ans;

    queue<int> q;

    vector<int> vis(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int a = q.front();
        q.pop();
        ans.push_back(a);

        for (auto it : adj[a])
        {
            indegree[it]--;
            if (indegree[it] == 0)
                q.push(it);
        }
    }

    return ans;
}
int main()
{

    return 0;
}