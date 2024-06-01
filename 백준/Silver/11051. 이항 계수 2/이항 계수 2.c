#include <stdio.h>
#include <stdlib.h>

long long comb(long long n, long long r,long long **m){

    if(r==0 || r==n) return 1;
    if(m[n-1][r-1]==-1){
        m[n-1][r-1]=comb(n-1,r-1,m);
    }
    if(m[n-1][r]==-1)
        m[n-1][r]=comb(n-1,r,m);

    return m[n-1][r-1]%10007+m[n-1][r]%10007;
}   

int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    long long **m=(long long**)malloc(sizeof(long long*)*(n+1));
	
	for(int i=0;i<n;i++)
			m[i]=(long long*)malloc(sizeof(long long)*(n+1));

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            m[i][j]=-1;
	
	int C = comb(n,k,m)%10007; // 4C2
	
	printf("%lld",C); 

    for(int i = 0; i < n; i++){
        free(m[i]);
    }
    free(m);
	return 0;
}