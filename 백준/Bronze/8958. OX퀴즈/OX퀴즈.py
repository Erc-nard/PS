k=int(input())
p,h,t=0,0,0
a=[]
for i in range(k):
    a=(list(input()))
    for p in range(len(a)):
        if a[p]=='O':
            t+=1
            h+=t
        else:
            t=0
    print(h)
    h,t=0,0
