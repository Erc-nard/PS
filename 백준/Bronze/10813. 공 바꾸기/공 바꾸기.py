n,m=map(int,input().split())
a=list(range(1,n+1))
for k in range(m):
    i,j=map(int,input().split())
    a[i-1],a[j-1]=a[j-1],a[i-1]
a=list(map(str,a))
print(" ".join(a))