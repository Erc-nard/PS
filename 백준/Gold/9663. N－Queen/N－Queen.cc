#include <iostream>

using namespace std;

int n;
bool v[15],d1[31],d2[31];
int dfs(int y){ //현재 y줄에서 x고름
    if(y==n) return 1;

    int result=0;
    for(int x=0;x<n;x++){ //현재 y일때 x하나씩 옮겨가면서 
        if(v[x] or d1[x+y] or d2[x-y+n]) continue; //n더하는 이유는 음수방지, 어차피 확인만 하면 되니까 모두 똑같이 n더함
        v[x]=d1[x+y]=d2[x-y+n]=true; //일렬로도 할수잇는듯 ,,
        result+=dfs(y+1); //다음 y줄로 넘어감
        v[x]=d1[x+y]=d2[x-y+n]=false;
    }
    return result;
}
int main(){

    cin>>n;
    cout<<dfs(0);
}
