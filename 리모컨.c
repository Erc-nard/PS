#include<stdio.h>
#include <stdlib.h>

int main(){

    int n,m;
    int available[10];
    int broken[10];
    int numdiv[7];
    int av=0;

    scanf("%d",&n);
    scanf("%d",&m);

    for(int i=0;i<m;i++)
        scanf("%d",&broken[i]); //broken input
    for(int i=0;i<10;i++){
        int flag=0;
        for(int j=0;j<m;j++)
            if(broken[j]==i)
                {flag=1; break;}
        if(flag==1) continue;
        available[av++]=i; //all-broken=available
    }

    int n1=n;
    int now=0;
    while(n1!=0){
        numdiv[now++]=n1%10;
        n1/=10;
    }//numdiv[now-i-1])

    int channel=0;
    int button=0;
    int flag=0;
    int diff,poit;
    
    for (int i = 0; i < now; i++) {
        diff = 10;
        poit = 0;
        if(flag==1){poit=av-1;}
        else{
        for (int j = 0; j < av; j++) {
            int current_diff = abs(numdiv[now - i - 1] - available[j]);
            if (current_diff < diff) {
                diff = current_diff;
                poit = j;
            }
        }
        if(numdiv[now - i - 1] - available[poit]>0) flag=1;
        }
        printf("%d",available[poit]);
        channel = channel * 10 + available[poit];
        button++;
    }
    int diff1,diff2;

    if(channel>n) diff1=channel-n;
    else diff1=n-channel;

    if(n>100) diff2=n-100;
    else diff2=100-n;


    
    if((diff1+button)>=diff2)
        printf("%d",diff2);
    else
        printf("%d",diff1+button);

}