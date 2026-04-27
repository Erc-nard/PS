#include <stdio.h>
#include <stdlib.h>

void printMatrix(int **a, int r, int c) {
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++ ){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

void matrixmul(int **a, int **c, int **x, int ar, int ac,int cc) {
	
	for(int i=0;i<ar;i++){
		for(int j=0;j<cc;j++){
			x[i][j]=0;
			for(int h=0;h<ac;h++){
				x[i][j]+=(a[i][h]*c[h][j]);
				}
			}
		}
	printMatrix(x,ar,cc);

}


int main(void)
{
	int **a, **c;
	int **x; // A * c
	int aRow, aCol;
	int cRow,cCol;
	int i, j;
	
	scanf("%d %d", &aRow, &aCol);

	a = (int**)malloc(sizeof(int*) * aRow); 
	for( i = 0; i < aRow; i++) 
		a[i] = (int*)malloc(sizeof(int) * aCol);

				
	for(i = 0; i < aRow; i++)
		for( j = 0; j < aCol; j++ )
			scanf("%d",&a[i][j]);

	scanf("%d %d",&cRow,&cCol);
    	c = (int**)malloc(sizeof(int*) * cRow); 
	for( i = 0; i < cRow; i++) 
		c[i] = (int*)malloc(sizeof(int) * cCol);
	x = (int**)malloc(sizeof(int*) * aRow); 
	for( i = 0; i < aRow; i++) 
		x[i] = (int*)malloc(sizeof(int) * cCol);
	
	for(i = 0; i < cRow; i++)
		for( j = 0; j < cCol; j++ )
			scanf("%d",&c[i][j]);		

	matrixmul(a,c,x,aRow,aCol,cCol);


	for(i = 0; i < aRow; i++)
		free(a[i]); //�� ���� ��ȯ
	free(a); // ���� ��ȯ
	for(i = 0; i < cRow; i++)
		free(c[i]); //�� ���� ��ȯ
	free(c); // ���� ��ȯ
	for(i=0;i<aRow;i++)
		free(x[i]);
	free(x);
}