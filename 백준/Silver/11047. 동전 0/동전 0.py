N,K=map(int,input().split())
a=[]
b=0
for i in range(N):
    a.append(int(input()))
c=K
a.sort(reverse=True)
for k in range(N):
    if c>=a[k]:
        b=b+int(c/a[k])
        c=c%a[k]
print(int(b))