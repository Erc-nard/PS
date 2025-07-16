#include <iostream>

using namespace std;

bool check(int** arr,int n,int x, int y){
    int b=0,w=0;
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(arr[i][j]==0) w++;
            else b++;
            }
        }
        if(w==0||b==0) return true; //한가지색으로만 이루어져있을때
        return false;
}
void paper(int **arr,int n,int x,int y){

    if(check(arr,n,x,y)==true){
        if(arr[x][y]==1) cout<<"1"; //blue
        else cout<<"0"; //white
    }
    else{
        cout<<"(";
        paper(arr,n/2,x,y); //왼위
        paper(arr,n/2,x,y+n/2); //오위
        paper(arr,n/2,x+n/2,y); //왼아
        paper(arr,n/2,x+n/2,y+n/2); //오아
        cout<<")";
    }
}

int main()
{
    int N;
    cin>>N;

    int **arr=new int *[N];
    for (int i = 0; i < N; ++i) {
        arr[i] = new int[N];
    }
    string line;
    for (int i = 0; i < N; ++i) {
        cin >> line;
        for (int j = 0; j < N; ++j) {
            arr[i][j] = line[j] - '0';
    }
}
    paper(arr,N,0,0);
}