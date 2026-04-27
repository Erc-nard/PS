import sys
input=sys.stdin.readline

N,M=map(int,input().split())

d=[]
b=[]
dbj=[]

for i in range(N):
    k=input()
    d.append(k.rstrip())
for i in range(M):
    t=input()
    b.append(t.rstrip())

b=set(b)

for i in range(len(d)):
    if d[i] in b:
        dbj.append(d[i])

dbj.sort()
print(len(dbj))
for i in range(len(dbj)):
    print(dbj[i])