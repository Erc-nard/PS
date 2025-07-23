#include <iostream>

using namespace std;

int main(){
    int num;
    cin>>num;
    int *stair=new int[num];
    int *stir=new int[num];
    for(int i=0;i<num;i++){
        cin>>stair[i];
    }
    stir[0]=stair[0];
    stir[1]=stair[0]+stair[1];//첫번째 무조건 밟아야
    stir[2]=max(stair[0]+stair[2],stair[1]+stair[2]);//2칸,1칸

    for(int i=3;i<num;i++){
        stir[i]=max(stir[i-2]+stair[i],stir[i-3]+stair[i-1]+stair[i]);//2칸, 2칸1칸(이렇게해야 1칸중복ㄴㄴ)
    }
    cout<<stir[num-1];
}
/*score[N] = score[N-2] + stair[N]
score[N] = score[N-3] + stair[N-1] + stair[N]*/