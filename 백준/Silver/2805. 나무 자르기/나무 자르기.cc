#include <iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m; //n:나무 수, m:가져갈 나무 길이이
    cin>>n>>m;

    long long max=-1;

    long long *list=new long long[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
        if(list[i]>max) max=list[i];
    } 

    long long low=1,high=max;
    int a=0;

    while(low<=high){

        long long mid=(low+high)/2;
        long long count=0;
        for(int i=0;i<n;i++){
            if(list[i]>mid){
                count+=list[i]-mid;
            }
        }
        if(count>=m){
            a=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<a;
}