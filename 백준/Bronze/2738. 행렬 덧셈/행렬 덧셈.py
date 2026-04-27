N,M=map(int,input().split())

A=[]
B=[]
for i in range(N):
    a=list(map(int,input().split()))
    A.extend(a)

for c in range(N):
    b=list(map(int,input().split()))
    B.extend(b)

for d in range(N):
    for k in range(M):
        print(int(A[k+d*M]+B[k+d*M]),'',end='')
    print('')
    