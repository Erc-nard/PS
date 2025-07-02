#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int zero[41]={0};
    int one[41]={0};

    zero[0]=1;
    one[1]=1;
    for(int i=2;i<41;i++){
        one[i]=one[i-1]+one[i-2];
        zero[i]=zero[i-1]+zero[i-2];
    }

    int num;

    for(int i=0;i<t;i++){
        cin>>num;
        cout<<zero[num]<<" "<<one[num]<<"\n";
    }

}