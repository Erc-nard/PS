#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	for (int s=1; s<=a; s++)
	{
		for(int d=1;d<=s ;d++ )
			printf("*");
		printf("\n");
	}
}