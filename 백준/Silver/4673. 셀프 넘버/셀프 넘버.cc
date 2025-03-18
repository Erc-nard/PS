#include <iostream>
#include <string>
using namespace std;

int num[10000]={0};

int main(){
    for(int i=1;i<10001;i++){
        int temp=0;
        int len=to_string(i).length();
        int now=i;
        temp+=i;
        for(int j=0;j<len;j++){
            temp+=(now%10);
            now/=10;
        }
        num[temp]=1;
    }

    for(int i=1;i<10001;i++){
        if(num[i]==0) cout<<i<<"\n";
    }
}