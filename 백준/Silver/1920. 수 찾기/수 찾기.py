import sys
input=sys.stdin.readline

N=int(input())
A=list(map(int,input().split()))
A=set(A)
M=int(input())
B=list(map(int,input().split()))

for i in range(M):
    if B[i] in A:
        print("1")
    else:
        print("0")
