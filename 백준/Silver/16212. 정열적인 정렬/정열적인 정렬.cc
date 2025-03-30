#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin>>n;

    int* jung= new int[n];
    for (int i=0;i<n;i++){
        cin >> jung[i];
    }
    sort(jung,jung+n);

    for(int i=0;i<n;i++){
        cout<<jung[i]<<" ";
    }

}