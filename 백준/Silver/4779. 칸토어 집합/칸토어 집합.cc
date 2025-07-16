#include <iostream>
#include <math.h>

using namespace std;

void cantor(int n){
    if(n==1){
        cout<<'-';
    }
    else{
        cantor(n/3); //왼쪽
        for(int i=0;i<n/3;i++){
            cout<<' ';
        }
        cantor(n/3);
    }
}

int main(){
    int n;
    while(1){
        cin >>n;
        if(cin.eof()) break; //파일끝
        else {
            cantor(pow(3,n));
            cout<<'\n';
        }
    }
}