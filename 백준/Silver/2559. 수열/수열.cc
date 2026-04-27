#include <iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int *list=new int[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    int tot=0;

    for(int i=0;i<k;i++){
        tot+=list[i];
    }

    int l=0,r=k;
    int max=tot;

    while(r<n){
        tot-=list[l];tot+=list[r];
        if(max<tot) max=tot;
        l++;r++;
    }

    cout<<max;
}