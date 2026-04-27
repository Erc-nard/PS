n=int(input())
lis=[]
for i in range(n):
    x,y=map(int,input().split())
    lis.append([y,x])
lis.sort()
for i in range(n):
    print(lis[i][1],lis[i][0])
