#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<int> graph[32001]; //{목적지,가중치}

vector<int> TopologicalSort(int nVertices){
      vector<int> T;
      queue <int> Q;
      vector<int> in_degree(nVertices+1, 0);

    for(int u=1; u<=nVertices; u++){ //각 노드 진입차수 계산
      for(int i=0; i<(int)graph[u].size(); i++){
        int v = graph[u][i];
        in_degree[v]++;
      }
    }

    for(int v=1;v<=nVertices;v++){ //진입차수 0 노드 큐에 추가
      if(in_degree[v]==0)
        Q.push(v);
    }

    while(Q.empty()!=true){ //위상정렬
      int u=Q.front();
      Q.pop();
      T.push_back(u);

      for(int i=0; i<(int)graph[u].size();i++) {
        int v=graph[u][i];
        in_degree[v]--;
        if(in_degree[v]==0)
          Q.push(v);
    }
    }
    return T;
  }


int main(){
    int n,m;
    cin>>n>>m;
    int a,b;

    for(int i=0;i<m;i++){
        cin>>a>>b;
        graph[a].push_back(b);
    }

    vector<int> result=TopologicalSort(n);

    for(int i=0;i<result.size();i++){
        cout<<result[i];
        if(i<result.size()-1) cout<<" ";
    }
    cout<<"\n";
}