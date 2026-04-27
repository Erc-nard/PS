import sys
input=sys.stdin.readline

N=int(input())
a=[0 for i in range(10001)]


for m in range(N):
    b=int(input())
    a[b]+=1

for t in range(10000):
    if a[t+1]!=0:
        for k in range(int(a[t+1])):
            print(t+1)
     