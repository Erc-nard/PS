#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string t;
    cin>>n;
    cin>>t;
    int flag=0;
    if(t[n-1]=='A') flag=-1;
    if(t[0]=='B') flag=-1;

    if(flag==-1) cout<<"No";
    else cout<<"Yes";
}