#include <iostream>
using namespace std;

int card(int n,int k,int* memo,int*p){ //k개를 갖기위함 n은 그냥 전체

    if(k==0){
        return 0; //완성
    }
    if(memo[k]!=-1) return memo[k]; //메모저장되어있는거 있으면 그거 return
    int tot=-1000000;

    for(int i=1;i<=n;i++){
        int j=card(n,k-i,memo,p);
        if(tot<j+p[i]&&k-i>=0){
            tot=j+p[i];
        }  
    }
    memo[k]=tot;
    return memo[k]; //메모이제이션
}

int main(){
    int n;
    cin>>n;
    int *p=new int[n+1];
    int *memo=new int[n+1];
    for(int i=0;i<n+1;i++){
        memo[i]=-1;
    }
    for(int i=1;i<n+1;i++){
        cin>>p[i];
    }
    cout<<card(n,n,memo,p);
}