#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n,greater<>());
    
    int s=0;
    for(int i=0;i<n;i++){
    	s+=a[i]*b[i];
    	}
    cout<<s;
    
}