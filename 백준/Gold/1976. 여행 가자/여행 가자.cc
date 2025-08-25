#include <iostream>

using namespace std;

int parent[1001];
int rank1[1001];
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
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;

    int a;

    for(int i=0;i<=n;i++){
        parent[i]=i;
        rank1[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a;
            if(a==1&&i!=j){
                unionroot(i,j);
            }
        }
    }

    int before,now;
    cin>>before;
    for(int i=1;i<m;i++){
        cin>>now;
        if(findroot(before)!=findroot(now)){
            cout<<"NO";
            break;
        }
        if(i==m-1){
            cout<<"YES";
        }
        before=now;
    }

}