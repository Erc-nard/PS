#include <iostream>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long k,n; //k:랜선개수, n:필요한 랜선개수
    cin>>k>>n;

    long long max=-1;

    long long *list=new long long[k];
    for(int i=0;i<k;i++){
        cin>>list[i];
        if(list[i]>max) max=list[i];
    } 

    long long low=1,high=max;
    int a=0;
    while(low<=high){

        long long mid=(low+high)/2;
        long long count=0;
        for(int i=0;i<k;i++){
            count+=list[i]/mid;
        }
        if(count>=n){
            a=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<a;
}