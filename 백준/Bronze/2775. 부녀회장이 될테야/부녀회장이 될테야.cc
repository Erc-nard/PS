#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k,n;
    cin>>t;

    int list[15][15];
    for(int i=0;i<15;i++){
        for(int j=0;j<15;j++){
            if(j==0) {
                list[i][j]=0;
            }
            else if(i==0){
                list[i][j]=j;
            }
            else{
                list[i][j]=list[i-1][j]+list[i][j-1];}
        }
    }

    for(int i=0;i<t;i++){
        cin>>k;
        cin>>n;
        cout<<list[k][n]<<'\n';
    }
}