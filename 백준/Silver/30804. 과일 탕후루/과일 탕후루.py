N=int(input())
a=list(map(int,input().split()))
max=0
now=0
for i in range(1,10):
    for j in range(2,10):
        for k in range(N):
            if(a[k]==i or a[k]==j):
                now+=1
            else:
                if(now>=max):
                    max=now
                now=0
        if(now>=max):
            max=now
        now=0
print(max)