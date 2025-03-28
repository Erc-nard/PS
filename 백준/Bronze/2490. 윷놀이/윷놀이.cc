#include <iostream>
using namespace std;

int main(){

    for(int i=0;i<3;i++){
        int tot=0;
        for(int j=0;j<4;j++){
            int now=0;
            cin>>now;
            tot+=now;
        }

        switch(tot){
            case 0:
                cout<<"D"<<endl;
                break;
            case 1:
                cout<<"C"<<endl;
                break;
            case 2:
                cout<<"B"<<endl;
                break;
            case 3:
                cout<<"A"<<endl;
                break;
            default:
                cout<<"E"<<endl;
        }
    }
}