#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> indegree(n + 1, 0);
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int num;
        cin>>num;
        vector<int> order(num);
        for(int j=0;j<num;j++){
            cin>>order[j];
        }

        for (int j=0;j<num-1; j++)
        {
            int a = order[j], b = order[j + 1];
            graph[a].push_back(b);
            indegree[b]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> sorted;
    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        sorted.push_back(i);
        for (int j : graph[i])
        {
            indegree[j]--;
            if (indegree[j] == 0)
                q.push(j);
        }
    }

    if (sorted.size() != n)
    {
        cout << '0' << '\n';
    }
    else
    {
        for (int x : sorted)
            cout << x << '\n';
    }
}