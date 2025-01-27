#include <stdio.h>
#include <math.h>

int main(){
    int t,a,b,sa,sb;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&a,&b);
        sa= pow(a,2);
        sb= pow(b,2);
        if(sb==0) sb+=1;
        printf("%d\n",sa/sb);
    }
}