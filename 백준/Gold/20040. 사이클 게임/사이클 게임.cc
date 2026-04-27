#include <iostream>

using namespace std;

int parent[500001],depth[500001];

void init(int num){
    for(int i=0;i<num;i++){
        parent[i]=i;
        depth[i]=1;
    }
}

int Find(int x){
    if(x==parent[x])
        return x;
    else return parent[x]=Find(parent[x]);
}

void Union(int x,int y){
    x=Find(x);
    y=Find(y);
    if(x!=y){
        if(depth[y]>depth[x])
            parent[x]=y;
        else if(depth[x]>depth[y])
            parent[y]=x;
        else{
            parent[x]=y;
            depth[x]++;
        }
    }
}
int main(){

    int n,m;
    cin>>n>>m;
    init(n);

    int one,two;
    int flag=0;

    for(int i=0;i<m;i++){
        cin>>one>>two;
        if(Find(one)==Find(two)){
            cout<<i+1;
            flag=1;
            break;
        }
        Union(one,two);
    }
    if(flag==0) cout<<"0";
}