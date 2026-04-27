#include <bits/stdc++.h>
using namespace std;

bool compare(pair<double, int>& a, pair<double, int>& b){
    if(a.first != b.first) return a.first > b.first;
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<double, int>> v;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        v.emplace_back((double)b/a, i + 1);
    }

    sort(v.begin(), v.end(), compare);

    for(auto p : v){
        cout << p.second << " ";
    }

    return 0;
}