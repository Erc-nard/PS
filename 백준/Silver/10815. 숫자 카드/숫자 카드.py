N=int(input())
a=list(map(int,input().split()))
a=set(a)
M=int(input())
c=list(map(int,input().split()))
for i in range(M):
    if c[i] in a:
        print("1", end=' ')
    else:
        print("0", end=' ')