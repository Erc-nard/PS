#include <iostream>

using namespace std;
long long poww(long long a, long long b,long long c){
    if(b==1){
        return a%c;
    }
    else{
        long long x;
        if(b%2==0){
            x=poww(a,b/2,c);
            return (x*x)%c;
        }
        else{
            x=poww(a,(b-1)/2,c);
            return (x*x)%c*a%c;
        }
    }
}
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    
    cout<<poww(a,b,c);
}