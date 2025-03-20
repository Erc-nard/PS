#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,temp,bunja,bunmo;
    cin>>x;
    temp=x;
    int last=0;
    for(int i=1;temp-i>0;i++){
        temp-=i;
        last=i;
    }
    last++;

    //printf("%d %d\n",temp,last);

    if(last%2==0){//짝수
        bunja=temp;
        bunmo=last-temp+1;
    }
    else{
        bunja=last-temp+1;
        bunmo=temp;
    }

    /*if(last==0&&temp==1){
        bunja=1; bunmo=1;
    }*/
    cout<<bunja<<"/"<<bunmo;

}