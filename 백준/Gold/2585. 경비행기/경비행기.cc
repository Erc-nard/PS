#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int vis[1001];
vector<vector<int>> edges;
vector<pair<int, int>> a;
int n,k;

bool bfs(int start) //start길이가 최대일때 끝까지 갈수 잇는지 확인
{
    fill(vis, vis + n + 2, 0);
    queue<int> q;
    vis[0] = 1;
    q.push(0);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int nxt=0;nxt<n+2;nxt++)
        {
            if (vis[cur] > k+1) //횟수제한
                continue;
            if(vis[nxt]!=0) continue;
            int x=a[cur].first - a[nxt].first;
            int y = a[cur].second - a[nxt].second;
            if (x*x+y*y>start)
                continue;
            vis[nxt] =vis[cur]+1;
            q.push(nxt);
        }
    }
    if(vis[n+1]>0) return 1; //도착
    else return 0;
}

int main()
{
    cin >> n >> k;
    int x,y;

    a.push_back({0,0});

    for (int i = 0; i < n; i++)
    {
        cin >> x>>y;
        a.push_back({x,y});
    }

    a.push_back({10000,10000});
    int left = 1, right = 20001;
    int tot=0;

    while (left <= right)
    {
        int mid = (left + right+1) / 2;
        if(bfs(mid*mid)){ //연료통크기로 이분탐색
            tot=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    if(tot%10==0) cout<<tot/10;
    else
    cout << tot/10+1;
}