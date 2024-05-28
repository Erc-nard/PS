#include <stdio.h>
#include <stdlib.h>

int counting(int n,int* memo,int f){
    
    if(n==1) return 1;
    if(memo[n]!=0) {
    	return memo[n]+1;
    	}
    
    if(n%3==0) {
    	memo[n]=counting(n/3,memo,f);
    	}
    if(n%2==0) {
    	if(memo[n]!=0){
    		if(memo[n]>counting(n/2,memo,f))
    			memo[n]=counting(n/2,memo,f);
    			}
    	else memo[n]=counting(n/2,memo,f);
    	}
    if(memo[n]!=0){
    	if(memo[n]>counting(n-1,memo,f))
    			memo[n]=counting(n-1,memo,f);
    		}
    	else memo[n]=counting(n-1,memo,f);
    //	printf("%d %d\n",n,memo[n]);
    	if(f==n) return memo[n];
    return memo[n]+1;
}

int main(){
    int n;
    scanf("%d",&n);
    int* memo=(int*)malloc(sizeof(int)*(n+1));
    for(int i=0;i<n;i++)
    	memo[i]=0;
    if(n==1) printf("0");
    else{
    int min=counting(n,memo,n);
    printf("%d",min);
    }
    free(memo);
}