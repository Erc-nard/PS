#include <stdio.h>
#include <stdlib.h>
void pick(int n, char* plama,int* bucket, int bucketSize, 
int k,int*max,int*min,int items[],int *count) { //중복 조합
    int i, lastIndex, smallest, item;
    int total = 0;
    if (k == 0) {
        //printf("%d", items[0]); 
        int pus[11];
        int now=0;

        for (i = 0; i < bucketSize; i++) {
            if(plama[bucket[i]]=='x'){
                if(plama[bucket[i-1]]=='x'||plama[bucket[i-1]]=='/')
                    if(i!=0)
                    pus[now]*=items[i+1];
                else pus[now++]=items[i+1]*items[i];
            }
            else if(plama[bucket[i]]=='/'){
                if(plama[bucket[i-1]]=='x'||plama[bucket[i-1]]=='/')
                    if(i!=0)
                    pus[now]/=items[i+1];
                else pus[now++]=items[i+1]/items[i];
                
            }
            else pus[now++]=items[i];
        }

        for (i = 0; i < now; i++) {
            if(plama[bucket[i]]=='+'){
                total+=pus[i];
            }
            else if(plama[bucket[i]]=='-'){
                total-=pus[i];
            }
        }
        if(now==1)total=pus[0];

        if((*count)==0){(*max)=total;(*min)=total;(*count)+=1;}
        else{
            if(total>=(*max))(*max)=total;
            if(total<=(*min))(*min)=total;}
        
        return;
    }
    lastIndex = bucketSize - k - 1; // 가장 최근에 뽑힌 수가 저장된 위치 index
    smallest = 0;
    for (item = smallest; item < n; item++) {
        bucket[lastIndex + 1] = item;
        pick(n, plama,bucket, bucketSize, k-1,max,min,items,count);
    }

}
int main() {
	int n,p,count=0;
	scanf("%d", &n);
    int items[11];
    char a[10];
    for(int i=0;i<n;i++){
        scanf("%d",&items[i]);
    }
    for(int i=0;i<4;i++){
        scanf("%d",&p);
        if(i==0)
            for(int j=0;j<p;j++)
                a[count++]='+';
        else if(i==1)
            for(int j=0;j<p;j++)
                a[count++]='-';
        else if(i==2)
            for(int j=0;j<p;j++)
                a[count++]='x';
        else if(i==3)
            for(int j=0;j<p;j++)
                a[count++]='/';
    }
    int bucket[13] ;
    int max=0,min=0;
    int cnt=0;
    pick(count, a,bucket,n-1, n-1,&max,&min,items,&cnt);
    printf("%d\n%d",max,min);
}