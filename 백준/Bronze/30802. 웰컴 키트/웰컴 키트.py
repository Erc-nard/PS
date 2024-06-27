n=int(input())
m=list(map(int,input().split()))
t,p=map(int,input().split())

tot=0
for i in range(len(m)):
    if(m[i]%t!=0):
        tot+=(int(m[i]/t)+1)
    else:
        tot+=(int(m[i]/t))
print(tot)
a=int(n/p)
b=int(n%p)
print(a,b)


