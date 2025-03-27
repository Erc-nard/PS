#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[1000];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    deque <int> balloon;
    deque <int> result;
    
    for(int i=0;i<n;i++){
        balloon.push_back(i);
    } //일단 다 집어넣기 0~n-1
        
    while(!balloon.empty()){

        int now=balloon.front();
        result.push_back(now); 
        //cout << num[now] << " ";
        balloon.pop_front();
        if(num[now]<0){
            for(int i=0;i<(-num[now]);i++){
                balloon.push_front(balloon.back());
                balloon.pop_back();
            }
        }
        else{
            for(int i=1;i<num[now];i++){
                balloon.push_back(balloon.front());
                balloon.pop_front();
        }

    }
    }
    //cout<<"\n";
    for(int i=0;i<n;i++){
        cout << result[i]+1<<" ";
    }
    
}