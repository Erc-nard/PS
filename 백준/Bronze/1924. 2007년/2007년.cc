#include <iostream>
#include <string>
using namespace std;

int main(){
    int x,y;
    int date=0;
    cin>>x>>y;

    for(int i=1;i<x;i++){
        switch(i){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                date+=31;
                break;
            case 2:
                date+=28;
                break;
            default: 
                date+=30;
        }
    }
    //printf("%d ",date);
    date+=y;
    date%=7;
    //printf("%d\n",date);
    switch(date){
        case 0:
            cout<<"SUN";
            break;
        case 1:
            cout<<"MON";
            break;
        case 2:
            cout<<"TUE";
            break;
        case 3:
            cout<<"WED";
            break;
        case 4:
            cout<<"THU";
            break;
        case 5:
            cout<<"FRI";
            break;
        default:
            cout<<"SAT";
    }
}