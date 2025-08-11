#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool SortSecCol(const pair<int,int>& v1, const pair<int,int>& v2) {
    if(v1.second == v2.second) return v1.first < v2.first; //끝나는시간같으면 시작시간빠른거로
    return v1.second < v2.second;
}


int main(){
    int n;
    int start,end;
    vector<pair<int,int>> t;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>start>>end;
        t.push_back(make_pair(start,end)); //끝나는시간 기준으로 정렬
    }
    
    sort(t.begin(),t.end(),SortSecCol);
    int count=1;

    int now=t[0].second; //맨처음벡터의 마지막거 선택
    for(int i=1;i<n;i++){
        if(t[i].first>=now){
            now=t[i].second;
            count++;
        }
    }
   cout<<count;
}
