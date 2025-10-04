#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxx=0;
int main(){
    long long n,c;
    cin>>n>>c;
    long long aa;
    vector<long long> a;
    for(long long i=0;i<n;i++){
        cin>>aa;
        a.push_back(aa);
    }

    long long left = 1, right = 1000000000;
    sort(a.begin(),a.end());

    while(left<=right){
        long long mid=(left+right+1)/2;
        long long s=1;
        long long now = a[0];
        for(long long i=1;i<n;i++){
            if(a[i]-now>=mid){
                s++;
                now=a[i];
            }
        }   

        if(s<c) {right=mid-1;}
        else{maxx=mid; left=mid+1;}
    }
    cout << maxx;
}