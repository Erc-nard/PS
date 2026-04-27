#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    long long *list=new long long[n];
    for(long long i=0;i<n;i++){
        cin>>list[i];
    }
    long long l=0,r=n-1;
    long long min1=2000000000;
    long long one=list[l],two=list[r];

    while(l<r){
        if(abs(list[l]+list[r])<abs(min1)){
            one=list[l]; two=list[r];
            min1=list[l]+list[r];
        }
        if(abs(list[l])<abs(list[r])){
            r--;
        }
        else{l++;}
    }

    cout<<one<<" "<<two;
}
