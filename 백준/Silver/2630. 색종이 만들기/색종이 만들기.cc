#include <iostream>

using namespace std;
int blue=0,white=0;

bool check(int** arr,int n,int x, int y){
    int b=0,w=0;
    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(arr[i][j]==0) w++;
            else b++;
            }
        }
        if(w==0||b==0) return true;
        return false;
}
void paper(int **arr,int n,int x,int y){

    if(check(arr,n,x,y)==true){
        if(arr[x][y]==1) blue++; //blue
        else white++; //white
        return;
    }
    else{
        paper(arr,n/2,x,y);
        paper(arr,n/2,x+n/2,y);
        paper(arr,n/2,x,y+n/2);
        paper(arr,n/2,x+n/2,y+n/2);

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
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
            }
    }
    paper(arr,N,0,0);
    cout<<white<<'\n';
    cout<<blue;
    
    
}