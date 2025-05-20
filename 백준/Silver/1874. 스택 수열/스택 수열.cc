#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main(){
    int n,now;
    cin>>n;
    stack <int> a;
    queue<char> result;

    int cnt=1;
    int flag=0;

    a.push(-1);
    for(int i=0;i<n;i++){   

        cin>>now; //숫자받음
        while(now>a.top()){ //a의 맨뒤보다 now가 크면 cnt를 하나씩 집어넣음
            a.push(cnt);
            result.push('+'); //집어넣으면 +출력
            flag++;
            cnt++;
        }
        if(now==cnt){ //찾던거 찾으면
            cnt+=1;
            result.push('+');
            result.push('-');
            flag++; //플러스 최대 n번까지만됨됨
            break;
        }
 
        
        while(now<=a.top()&&!a.empty()){ //now보다 a의 꼭대기가 같거나 작으면
            if(now==cnt){
                result.push('-');
                a.pop();
                break;
            }
            result.push('-'); //맞는값 나올때까지 pop
            a.pop();
        }

    }



    if(flag<=n){
        int si=result.size();
        for(int i=0;i<si;i++){
            cout<<result.front()<<'\n';
            result.pop();
        }
    }
    else{
        cout<<"NO";
    }
}