#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;//n개, 최대 k무게

    int w[102];
    int v[102];
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }

    int dp[102][100001]={0};
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<=k;j++){ //각무게일때마다 최대값
            if(w[i-1]>j){
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(dp[i-1][j],v[i-1]+dp[i-1][j-w[i-1]]);
            }
        }
    }
    cout<<dp[n][k];

}