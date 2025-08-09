#include <iostream>
using namespace std;

void gas(){

}

int main(){
    int n;
    cin>>n;

    long long *liter=new long long[n];
    long long *gasst=new long long[n+1];
    
    for(int i=0;i<n-1;i++){
        cin>>liter[i];
    }
    for(int i=0;i<n;i++){
        cin>>gasst[i];
    }
    long long tot=0; 
    long long now=gasst[0];
    
    for(int i=0;i<n-1;i++){
        if(gasst[i]<now) now=gasst[i]; //더 싼곳 만나면 바꿈
        tot+=now*liter[i];
    }
    
    cout<<tot;
}