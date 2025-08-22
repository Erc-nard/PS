#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[1000001];
int rank1[1000001];
vector<pair<int,pair<int,int>>> edge;

int findroot(int x){
    if(x==parent[x]) return x; //x가 루트면 그대로반환
    return parent[x]=findroot(parent[x]);//자식이면 재귀돌려서 루트 찾기
}

void unionroot(int x,int y){ //두 트리 합침
    x=findroot(x);
    y=findroot(y);

    if(x!=y) { //높이가 낮은 트리를 높은트리에 붙이기(트리높이 더 많이 증가됨)
        if(rank1[y]>rank1[x]) {parent[x]=y;}
        else if(rank1[x]>rank1[y]){parent[y]=x;}

        else{ //높이가 같으면 합치고 높이 1증가
            parent[y]=x;
            rank1[x]++;
        }
        
    } //한쪽트리를 다른 트리에 합침
}

long long kruskal(int v){
    long long tot=0;
    int count=0;

    for(int i=0;i<edge.size();i++){
        pair<int,pair<int,int>> now=edge[i];

        int one=now.second.first; //지금 간선 양끝에잇는 정점 두개
        int two=now.second.second;//one-now-two 이런식

        if(findroot(one)==findroot(two)) continue;//사이클발생 배제

        tot+=now.first; //사이클 발생안하면 mst에 현재 간선 추가
        unionroot(one,two); //parent 갱신

        if(count==v-2) break; //다구하면 종료
    }
    return tot;
}

int main(){
    int v,e;
    cin>>v>>e;
    int a,b,c;

    for(int i=0;i<e;i++){
        cin>>a>>b>>c;
        edge.push_back({c,{a,b}});//{간선{one,two}}
    }
    sort(edge.begin(),edge.end());

    for(int i=0;i<=v;i++){
        parent[i]=i;
        rank1[i]=0;
    }

    cout<<kruskal(v)<<"\n";
}