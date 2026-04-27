N,k=map(int, input().split())
a=1
b=1
c=1
t=1
while t<=N:
    a*=t
    t+=1
t=1
while t<=k:
    b*=t
    t+=1
t=1
while t<=N-k:
    c*=t
    t+=1
print(int(a/(b*c)))