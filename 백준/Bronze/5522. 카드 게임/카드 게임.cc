#include <iostream>

using namespace std;
int main(){
    unsigned long long tot=0;
    for(int i=0;i<5;i++){
        unsigned long long a;
        cin>>a;
        tot+=a;
    }
    cout<<tot;
}