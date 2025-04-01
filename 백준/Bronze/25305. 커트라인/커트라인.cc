#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    vector <int> score;

    int now;
    for(int i=0;i<n;i++){
        cin>>now;
        score.push_back(now);
    }

    sort(score.begin(),score.end(),greater<>());

    cout<<score[k-1];
}