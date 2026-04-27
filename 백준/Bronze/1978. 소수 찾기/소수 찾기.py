N=int(input())
a=list(map(int,input().split()))
t,q=0,0
for i in range(N):
    b=a[i]**(1/2)
    if b!=1:
        for k in range(2,round(b)+1):
            if a[i]%k==0:
                t+=1
                break
            else:
                t+=0
        if t>=1:
            q+=0
        else:
            q+=1
        t=0
    else:
        q+=0
print(q)

