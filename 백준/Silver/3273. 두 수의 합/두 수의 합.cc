#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); //이거하면 속도 빨라짐 
    
    int n,x,now;
    int num=0;
    cin>>n;
    int* arr=new int[n]{};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    sort(arr, arr + n);
    
    int start=0, end=n-1;
    while(start<end){ //i가 start
        now=arr[start]+arr[end];
        if(now==x){num++; start++; end--;}
        else if(now<x){start++;}
        else{end--;}
    }
    cout<<num;
}