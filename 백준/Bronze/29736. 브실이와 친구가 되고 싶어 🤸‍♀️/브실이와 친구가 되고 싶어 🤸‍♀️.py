a,b=map(int,input().split())
c=list(range(a,b+1))
t=0
k,x=map(int,input().split())
for i in range(len(c)):
    if c[i]>=k:
        if c[i]-k<=x:
            t+=1
    else:
        if k-c[i]<=x:
            t+=1
if t==0:
    print("IMPOSSIBLE")
else:
    print(t)
