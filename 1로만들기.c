#include <stdio.h>
#include <stdlib.h>

void counting(int n,int count,int* min){
    if(n<1) return;
    if(n==1)
        if((*min)>count)(*min)=count;
    
    if(n%3==0) counting(n/3,count+1,min); //연산결과들 memo하기
    if(n%2==0) counting(n/2,count+1,min);
    counting(n-1,count+1,min);
}

int main(){
    int n,count=0,min=9999;
    scanf("%d",&n);

    
    counting(n,count,&min);
    printf("%d",min); 
}