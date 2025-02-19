#include <stdio.h>
#include <string.h>

int main(){
    char sent[100];
    int cnt=0;
    scanf("%s",sent);
    int lgth=strlen(sent);

    for(int i=0;i<lgth;i++){

        if(sent[i]=='c' && i+1<lgth){
                if(sent[i+1]=='-'||sent[i+1]=='='){
                    cnt+=1;
                    i+=1;
                    continue;
                }
        }

        if(sent[i]=='d' && i+1<lgth){
            if(sent[i+1]=='-'){
                cnt+=1;
                i+=1;
                continue;
            }
            if(i+2<lgth&&sent[i+1]=='z'&&sent[i+2]=='='){
                cnt+=1;
                i+=2;
                continue;
            }
        }
        if(i+1<lgth){
            if(sent[i]=='l'&&sent[i+1]=='j'){
                cnt+=1;
                i+=1;
                continue;
            }
            if(sent[i]=='n'&&sent[i+1]=='j'){
                cnt+=1;
                i+=1;
                continue;
            }
            if(sent[i]=='s'&&sent[i+1]=='='){
                cnt+=1;
                i+=1;
                continue;
            }
            if(sent[i]=='z'&&sent[i+1]=='='){
                cnt+=1;
                i+=1;
                continue;
            }
        }
        cnt+=1;


    }

    printf("%d",cnt);
}