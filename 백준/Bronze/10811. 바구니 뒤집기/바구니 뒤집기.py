n,m=map(int,input().split())
a=list(range(1,n+1))
for t in range(m):
    i,j=map(int,input().split())
    b=a[i-1:j]
    b.reverse()
    del a[i-1:j]
    for p in range(len(b)):
        a.insert(i-1,b[len(b)-p-1])
a=list(map(str,a))
print(" ".join(a))
