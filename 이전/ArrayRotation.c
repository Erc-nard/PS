#include <stdio.h>

int main(){
    int n,q;
    int a[100][100];
    int b[100][100];
    int num;

    int change;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&num);
        if(num==1){
            scanf("%d",&num);
            num=num-1;
            change=a[num][0];
            a[num][0]=a[num][n-1];
            a[num][n-1]=change;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    b[j][n-i]=a[i][j];
                }
            }   
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=b[i][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}