#include <iostream>
#include <vector>
using namespace std;

int dp[501][501];

int main(){
    int n;
    cin>>n;

    vector <int> P(n+1);
    for(int i=1;i<=n;i++){
        cin>>P[i-1]>>P[i];
    }
    for(int len=2;len<=n;len++){
        for(int i=1,j=len;j<=n;i++,j++){
            dp[i][j]=(1LL<<31)-1;
            for(int k=i;k<=j-1;k++){
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+P[i-1]*P[j]*P[k]);
            }
        }
    }
    cout<<dp[1][n];
}