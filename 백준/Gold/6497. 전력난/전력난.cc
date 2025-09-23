#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int v, e;
int parent[200001];

void init()
{
    for (int i = 0; i < v; i++)
        parent[i] = i;
}

int Find(int x)
{
    if (x == parent[x])
        return x;
    return parent[x] = Find(parent[x]);
}

bool Union(int x, int y)
{
    x = Find(x);
    y = Find(y);
    if (x != y)
    {
        parent[x] = y;
        return true;
    }
    return false;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    while(true){
        cin >> v >> e;
        if(v==0&&e==0) break;
        vector<pair<int, pair<int, int>>> edges(e);
        init();
        long long tot=0;

        for (int i = 0; i < e; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            edges[i] = {c, {a, b}};
            tot+=c;
        }
        sort(edges.begin(), edges.end());
        long long ans = 0;
        for (int i = 0; i < e; i++)
        {
            if (Union(edges[i].second.first, edges[i].second.second))
                ans += edges[i].first;
        }
        cout << tot-ans << "\n";
    }
}
