#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int n;
    int tot=0,max=-4000,min=4000;

    int all[8001]={0}; //개수세는용도. -1은 4001 -4000은 8000


    cin>>n;
    int* mid= new int[n];

    for(int i=0;i<n;i++){
        int now;
        cin>>now;

        mid[i]=now;
        tot+=now;

        if(now>max) max=now;
        if(now<min) min=now;
        
        if(now<0){all[4000-now]+=1;} //개수세기 
        else{all[now]+=1;}
    }

    sort(mid,mid+n); //중앙값찾기용용

    int bin=0;
    vector <int> binlist; //vector로 .. 
    
    for(int i=0;i<=8000;i++){
        if(all[i]>bin){
            bin=all[i];
            binlist.clear(); //최빈값 여러개이면 받기 다시 최빈값찾으면 기존리스트 클리어
            if(i>4000){
                binlist.push_back(-(i-4000));
            }
            else{
                binlist.push_back(i);
            }
        }
        else if(all[i]==bin){
            if(i>4000){
                binlist.push_back(-(i-4000));
            }
            else{
                binlist.push_back(i);
            }
        }
    }

    sort(binlist.begin(),binlist.end()); 
    /* for(int i=0;i<binlist.size();i++){
        cout<<binlist[i]<<" ";
    } */

    if(round((double)tot/n)==-0)
        cout<<0<<endl;
    else
        cout<<round((double)tot/n)<<endl;
    cout<<mid[n/2]<<endl;



    if(binlist.size()==1)
        cout<<binlist[0]<<endl;
    else cout<<binlist[1]<<endl;
    cout<<max-min;


}