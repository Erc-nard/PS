N,M=map(int,input().split())
a=["0" for i in range(N)]
for i in range(M):
    l,j,k=map(int,input().split())
    for b in range(l-1,j):
        a[b]=str(k)
print(" ".join(a))
