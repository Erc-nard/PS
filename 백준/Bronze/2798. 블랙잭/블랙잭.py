n,m=map(int,input().split())
a=list(map(int,input().split()))
max=0
tot=0
for i in range(n):
    for k in range(n):
        for t in range(n):
            if(k!=t and t!=i and i!=k):
                tot=a[i]+a[t]+a[k]
            if(tot>=max and tot<=m):
                max=tot  
print(max)