#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); //이거하면 속도 빨라짐 

    int a[9][9];
    int max=-1,x=0,y=0;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
            if(a[i][j]>max){
                max=a[i][j];
                x=i;
                y=j;
            }
        }
    }
    cout<<max<<"\n";
    cout<<x+1<<" "<<y+1;
}