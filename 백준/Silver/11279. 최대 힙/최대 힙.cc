#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); //이거하면 속도 빨라짐 

    priority_queue <int> hip;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            if(hip.empty()){
                cout<<"0"<<"\n";
            }
            else{
                cout<<hip.top()<<"\n";
                hip.pop();
            }
        }
        else{
            hip.push(x);
        }
    }
}