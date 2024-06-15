n,m=map(int,input().split())
a=[list(input()) for _ in range(n)]
min1=10000
for i in range((n-8)+1):
    for t in range((m-8)+1):
        w=0
        b=0
        cc=a[i][t]
        for k in range(8):
            for p in range(8):
                if (k+p)%2==0:
                    if a[i+k][t+p]!=cc:
                        w+=1
                    else:
                        b+=1
                else:
                    if a[i+k][t+p]==cc:
                        w+=1
                    else:
                        b+=1
        if w<=b and w<min1:
            min1=w
        elif w>b and b<min1:
            min1=b
print(min1)