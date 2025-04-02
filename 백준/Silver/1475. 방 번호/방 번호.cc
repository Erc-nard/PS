#include <iostream>

using namespace std;

int main(){
    int n;
    int num[10]={0};
    cin>>n;

    //한자리씩 쪼개서 받아서 num에 개수기입
    while(n!=0){
        num[n%10]++;
        n/=10;
    }

    int max=0;
 
    num[6]=((num[6]+num[9])/2)+((num[6]+num[9])%2);

    for(int i=0;i<9;i++){
        //cout<<i<<"="<<num[i]<<endl;
        if(num[i]>max) max=num[i];
    }

    cout<<max;
}