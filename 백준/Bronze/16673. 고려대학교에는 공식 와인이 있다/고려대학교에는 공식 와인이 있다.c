#include <stdio.h>
#include <math.h>

int main(){
    int c,k,p;
    scanf("%d %d %d",&c,&k,&p);
    int tot=0;
    for(int i=0;i<c+1;i++){
        tot+=(k*i)+(p*pow(i,2));
    }
    printf("%d",tot);
}