import sys

n=int(sys.stdin.readline())
lis=[]

for i in range(n):
    a,b=map(str,input().split())
    lis.append([int(a),i,b])
lis.sort()

for i in range(n):
    print(lis[i][0],lis[i][2])