#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue <int> left; //내림차순
    priority_queue <int, vector<int>, greater<int>> right; //오름차순 
    int n,x;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(left.size()==0||left.top()>x) left.push(x);
        else right.push(x);

        if(left.size()>right.size()+1){ 
            right.push(left.top()); //가장 큰거
            left.pop();
        }
        else if(left.size()<right.size()){
            left.push(right.top()); //가장 작은거 
            right.pop();
        }
        cout<<left.top()<<'\n'; //left크기랑 mid랑 같음 
    }

}