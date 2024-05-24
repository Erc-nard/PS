#include <iostream>
using namespace std;

int main(){
    int n,now;
    int flag=0;
    int count=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        now=i;
        flag=0;
        if(i<100) count++; //100이하는 등차
        else{
            int countnow[5]; //한자리씩 입력받기
            int cnt=0;
            int c=now;
            while (c != 0) {
                countnow[cnt++]=c%10;
                c = c / 10;
                if (c == 0) break; //받기
            }
            int d=countnow[cnt-1]-countnow[cnt-2]; //등차
            //cout<<d<<endl;
            for(int i=1;i<cnt;i++){
                int d2=countnow[cnt-i]-countnow[cnt-i-1];
                if(d2!=d) {flag=1; break;}
            }
            if(flag==0) {count++;} 
            
        }
    }   

    cout<<count<<endl;
}