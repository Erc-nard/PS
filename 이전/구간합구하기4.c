#include <stdio.h>

int main(){
    int n,m;
    int num;
    int start,end;
    scanf("%d %d",&n,&m);
    int a[100000];
    a[0]=0; //몇번째인지 쉽게 계산하려고

    for(int i=1;i<n+1;i++){
        scanf("%d",&num);
        if(i==1) a[i]=num;
        else{
            a[i]=num+a[i-1]; //누적합저장
        }
    }

    for(int i=0;i<m;i++){
        scanf("%d %d",&start,&end);
        printf("%d\n",a[end]-a[start-1]); //start번째포함
    }
}
