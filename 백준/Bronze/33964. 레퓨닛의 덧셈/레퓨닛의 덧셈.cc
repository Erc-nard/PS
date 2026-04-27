#include <iostream>
using  namespace std;

int main(){
    int x,y;
    int a[9]={1,11,111,1111,11111,111111,1111111,11111111,111111111};

    cin>>x>>y;

    cout<<(a[x-1]+a[y-1]);

}