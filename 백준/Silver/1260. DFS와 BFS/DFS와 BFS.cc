#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
bool visited[10001];
vector<int> graph[10001];

void dfs(int n){
    visited[n]=true; //방믄된거면 출력
    cout<<n<<" ";
    for(int i=0;i<graph[n].size();i++){ //지금 정점에서 갈수잇는곳 다 보기
        int k=graph[n][i];
        if(!visited[k]) dfs(k); //방문안햇으면 dfs다시
    }
}

void bfs(int n){
    queue<int> q;
    q.push(n); //첫정점 큐에 삽입
    visited[n]=true; //방문처리

    while(!q.empty()){
        int k=q.front();//넣은거 빼서 인접한거 방문처리
        q.pop();
        cout<<k<<" ";
        for(int i=0;i<graph[k].size();i++){
            int t=graph[k][i];
            if(!visited[t]){
                q.push(t); //큐에삽입하고 방문처리
                visited[t]=true;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,v;
    cin>>n>>m>>v;


    for(int i=0;i<m;i++){
        int o,t;
        cin>>o>>t;
        graph[o].push_back(t); //해당 정점에 연결된 다른 정점
        graph[t].push_back(o); //무방향이라 둘다넣어줘야댐*******
    }

    for (int i = 1; i <= n; i++) //정렬!!!!!!***여러개면 작은거부터 가야함
        sort(graph[i].begin(), graph[i].end());
    dfs(v);
    cout<<"\n";
    fill(visited, visited + 10001, false);//초기화 ... 
    bfs(v);
    
}
