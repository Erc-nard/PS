import sys
N=int(sys.stdin.readline())
a=[]
for i in range(N):
    a.append(int(sys.stdin.readline()))
a.sort()
b=len(a)
for i in range(b):
    print(a[i])