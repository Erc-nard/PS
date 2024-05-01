#include <stdio.h>

int main(){
    int n;
    double a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lf",&a);
        printf("%.10f\n",a/6);
    }
}
