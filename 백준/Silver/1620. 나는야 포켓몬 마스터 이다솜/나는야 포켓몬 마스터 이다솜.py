import sys
input=sys.stdin.readline

N,M=map(int,input().split())
a={}
for i in range(N):
    b=input()
    b=b.rstrip()
    a[i+1]=b

ra=dict(map(reversed,a.items()))

for i in range(M):
    c=input()
    c=c.rstrip()
    if c.isdigit()==True:
        print(a.get(int(c)))
    else:
        print(ra.get(c))