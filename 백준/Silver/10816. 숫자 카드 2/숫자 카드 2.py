n=int(input())
dic={}
a=list(map(int,input().split()))
for i in range(n):
    if a[i] in dic:
        dic[a[i]]=dic[a[i]]+1
    else:
        dic[a[i]]=1
m=int(input())
b=list(map(int,input().split()))
for i in range(m):
    if b[i] in dic:
        print(dic[b[i]],end=" ")
    else:
        print("0", end=" ")