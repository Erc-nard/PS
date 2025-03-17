#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >>N;
    for(int i=0;i<N-1;i++){
        cout<<string(i,' ');
        cout<<string(2*(N-i)-1,'*')<<"\n";
    }
    for(int i=0;i<N;i++){
        cout<<string(N-i-1,' ');
        cout<<string(i*2+1,'*')<<"\n";
        }
}