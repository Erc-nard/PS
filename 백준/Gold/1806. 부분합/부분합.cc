#include <iostream>

using namespace std;

int main(){
    int n,s;
    cin>>n>>s;

    int *list=new int[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    int leng=1000001;
    int l=0,r=0;
    int now=0;
    while(1){
        if(now<s){
            if(r>=n) break;
            now+=list[r];
            r++;
        }
        else{
            now-=list[l];
            if(leng>r-l)leng=r-l;
            l++;
        }
    }

    if(leng==1000001) cout<<"0";
    else cout<<leng;

}