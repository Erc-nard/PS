#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n,now,min = 10000;
    int sqr[317];
	scanf("%d", &n);

    for(int i=0;i<316;i++)
        if((316-i)*(316-i)<n)
            now=316-i;
        
    for(int i=1;i<=now;i++){
        for(int j=1;j<=now;j++){
            
        }
    }
	printf("%d\n", min);

}