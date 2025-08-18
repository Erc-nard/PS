#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
using namespace std;


vector<pair<int,int>> graph[20001]; //{목적지,가중치}

vector<int> Dijkstra(int s){
      vector<int> D(20001, INT_MAX); //s에서 i까지 최단거리
      vector<int> P(20001, -1);//최단경로 추적용 (이전노드)
      vector<bool> visitd(20001,false);
      D[s]=0; //시작점에서 거리=0

      priority_queue<pair<int, int>,vector<pair<int,int>>, greater<pair<int,int>>> Q; //거리 짧은거부터 처리 {거리,노드}
      Q.push(pair<int, int>(0, s)); //{거리,시작노드}

      while(!Q.empty()){
        int dis=Q.top().first; //거리
        int u=Q.top().second; //노드
        Q.pop();

        if(visitd[u]) continue;
        visitd[u]=true;

        for(int v=0; v<(int)graph[u].size();v++){//
            int vv=graph[u][v].first; //인접한 목적지 노드
            int w=graph[u][v].second;//u에서 vv로 가는 간선 가중치

            if(D[u]+w<D[vv]){ //기존거리보다 u거쳐가는게 짧으면 거리 업데이트
            D[vv]=D[u]+w; //최단거리 업데이트()
            Q.push(pair<int,int>(D[vv],vv));
            P[vv]=u; //경로추적위해 이전노드 저장
            }
      }
    }
    return D;
  }

int main(){
    int v,e,k;
    cin>>v>>e;
    cin>>k;
    int u,vv,w;
    for(int i=0;i<e;i++){
        cin>>u>>vv>>w;
        graph[u].push_back({vv,w});
    }

    vector<int> dist=Dijkstra(k);

    for(int i=1;i<=v;i++){
        if(dist[i]==INT_MAX) cout<<"INF\n";
        else{
        cout<<dist[i]<<"\n";}
    }

}