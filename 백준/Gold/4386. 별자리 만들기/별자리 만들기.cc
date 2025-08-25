#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int parent[1000001];
int rank1[1000001];
vector<pair<double,pair<int,int>>> edge;
vector<pair<double,double>> star;

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

double kruskal(int v){
    double tot=0;
    int count=0;

    for(int i=0;i<edge.size();i++){
        pair<double,pair<int,int>> now=edge[i]; //double
        int one=now.second.first; //지금 간선 양끝에잇는 정점 두개
        int two=now.second.second;//one-now-two 이런식

        if(findroot(one)==findroot(two)) continue;//사이클발생 배제

        tot+=now.first; //사이클 발생안하면 mst에 현재 간선 추가
        unionroot(one,two); //parent 갱신
        count++;

        if(count==v-1) break; //다구하면 종료
    }
    return tot;
}

int main(){
    int n;
    cin>>n;
    double x,y;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        star.push_back({x,y});//별먼저 받음
    }
    
    
    for(int i=0;i<n;i++){ //별간 거리 미리 다 구해두기
        for(int j=i+1;j<n;j++){
            double one=star[i].first-star[j].first;
            double two=star[i].second-star[j].second;
            double dist=sqrt(one*one+two*two);
            edge.push_back({dist,{i,j}}); //{간선,{좌표}}
        }
    }

    sort(edge.begin(), edge.end());

    for(int i=0;i<=n;i++){
        parent[i]=i;
        rank1[i]=0;
    }
    cout<<fixed; //자릿수고정
    cout.precision(2);
    cout<<kruskal(n)<<"\n";
}