#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    
    int flag=0;

    for(int x=-999;x<=999;x++){
        for(int y=-999;y<=999;y++){
            if(a*x+b*y==c && d*x+e*y==f){
                flag=1;
                cout<<x<<" "<<y;
                break;
            }
        }
        if(flag==1) break;
    }
}