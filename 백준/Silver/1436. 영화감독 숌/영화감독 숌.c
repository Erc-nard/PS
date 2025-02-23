#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);

    int cnt=0;

    for(int i=666;;i++){

        char buffer[20];
        sprintf(buffer, "%d", i); // 정수를 문자열로 변환

        if(strstr(buffer,"666")!=NULL){
            cnt+=1;
        } //666있으면 cnt+1

        if(cnt==n) {
            printf("%d",i);
            break;
        }
    }
}