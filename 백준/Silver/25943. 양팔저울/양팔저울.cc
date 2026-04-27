#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int left=0,right=0;
    cin>>left;
    cin>>right;

    int now;
    for(int i=0;i<n-2;i++){
        cin>>now;
        if(left==right){
            left+=now;
        }
        else{
            if(left<right)
            left+=now;
            else right+=now;
        }
    }
    int cha=abs(left-right);
    int choo[7]={100,50,20,10,5,2,1};

    int num=0;

    for(int i=0;i<7;i++){
        while(cha-choo[i]>=0){
            cha-=choo[i];
           num++;
        }
        if(cha==0){
            cout<<num;
            break;
        }
    }
}