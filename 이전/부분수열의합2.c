#include <stdio.h>
#include <stdlib.h>

void bubble(int* s,int size){
    int temp;

    for(int i=0;i<size;i++)
        for(int j=0;j<size-i;j++){
            if(s[i]>s[j]){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
}

int main(){
    int n;
    scanf("%d",&n);

    int* s=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&s[i]);

    bubble(s,n);

    for(int i=0;i<n-1;i++){
        
    }
    free(s);
}