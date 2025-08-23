#include <iostream>
#include <unordered_map>
#include <string.h>

using namespace std;

unordered_map<string,int> m;
int parent[1000001];
int rank1[1000001];

int findroot(int x){
    if(x==parent[x]) return x; //x가 루트면 그대로반환
    return parent[x]=findroot(parent[x]);//자식이면 재귀돌려서 루트 찾기
}

int unionroot(int x,int y){ //두 트리 합침
    x=findroot(x);
    y=findroot(y);

    if(x!=y) { //높이가 낮은 트리를 높은트리에 붙이기(트리높이 더 많이 증가됨)
        parent[y]=x; //x에 y붙임
        rank1[x]+=rank1[y]; //그만큼 크기 늘림
        
    } //한쪽트리를 다른 트리에 합침
    return rank1[x];
}

int main(){
    int t,f,index;
    string s1,s2;
    cin>>t;
    for(int i=0;i<t;i++){
        m.clear();
        index=0;

        cin>>f;
        for(int k=0;k<f*2;k++){
            parent[k]=k;
            rank1[k]=1; //독립이라 1
        }
        

        for(int j=0;j<f;j++){
            cin>>s1>>s2;

            if(m.count(s1)!=1) m[s1]=index++; //없으ㅕㅁㄴ 새 키 배정
            if(m.count(s2)!=1) m[s2]=index++;

            cout<<unionroot(m[s1],m[s2])<<"\n"; //두 집합합치고 네트워크크기출력
        }
    }
}