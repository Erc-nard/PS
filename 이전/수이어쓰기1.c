#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n, count=0;
    scanf("%d",&n);
    int copi=n;

    while(copi!=0){
        count++;
        copi=copi/10;
    }//n 자리수 세기

    int total=0;
    for(int i=count;i>0;i--){
        int num1=0;
        for(int j=1;j<i;j++){
            num1*=10;
            num1+=9; //i랑 count랑 같을때는 n-9 n- 99이런식으로 뺌
        }
        if(i==count)
            total+=(i*(n-num1));
        else{ //나머지는 1x9 2x90 3x900이런식으로 더함
            num1=pow(10,i-1);
            total+=i*9*num1;
        }
    }
    printf("%d",total);
}