#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d",&n);
    int cnt=0; //그룹단어체크크

    for(int i=0;i<n;i++){ //한줄씩 받기
        char alpha[26]={0}; //알파벳받을곳 초기화
        char sent[100];
        int flag=0;

        scanf("%s",sent);

        int l=strlen(sent); //받은문자길이

        for(int j=0;j<l;j++){
            int k=0; //같으면 안에서 하나씩 추가

            if(alpha[sent[j]-97]!=0){flag=1; break;} //그룹단어 아니면 flag1하고 브레이크

            while(sent[j]==sent[j+k]){ //어디까지 중복인가보소
                if(j+k>=l) break;
                k++;
            }
            alpha[sent[j]-97]=1;
            j+=(k-1);
        }
        if(flag!=1) cnt++;

    }

    printf("%d",cnt);
}