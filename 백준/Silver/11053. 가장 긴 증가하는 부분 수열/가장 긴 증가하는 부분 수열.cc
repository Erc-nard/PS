#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *a=new int[n];
    int *leng=new int[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        leng[i]=1; //길이 재는 용
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]&&leng[i]<leng[j]+1){ //길이 같을수도잇으니깐 
                leng[i]=leng[j]+1; 
            }
        }
    }

    cout<<*max_element(leng,leng+n);
}