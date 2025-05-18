#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int c;
    cin>>c;

    int n,m;

    for(int i=0;i<c;i++){
        queue <pair<int,int>> doc;
        priority_queue <int> ssen;
        int boom=0;
        cin>>n>>m; //n은 문서개수 m은 몇번째인지 궁금한 문서의 현재위치치
        for(int j=0;j<n;j++){
            int t;
            cin>>t;
            doc.push({j,t}); //j는 index t는 중요도도
            ssen.push(t);
        }


        while(!doc.empty()){
            int index=doc.front().first; //doc의 맨처음거 비교
            int prior=doc.front().second;
            doc.pop(); //이거 다빠질때까지 비교

            //index랑 현재순위랑 맞는거 찾기

            if(prior==ssen.top()){ //현재 순위거 index라면
                boom++;
                ssen.pop();
                if(index==m){
                    cout<<boom<<'\n';
                    break;
                }
            } //doc에 저장한 
            else{ //아니라면 뒤로넣기
                doc.push({index,prior});
            }
        }
    }
}