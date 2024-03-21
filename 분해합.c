#include <stdio.h>
int main(){
    int n,tot,num;
    scanf("%d",&n);

    int check=0;

    for(int i=0;i<n;i++){

        num=i; 
        tot=num;

        while(num!=0){
            tot+=(num%10);
            num=num/10;
        }
        
        if (tot==n){
            check=1;
            printf("%d",i);
            break;
        }
    }
    if (check==0)
        printf("0");
}
