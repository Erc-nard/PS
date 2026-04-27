N,M=map(int, input().split())
a=[]
if N>1:
    for i in range(N-1):
        a.append(int(input()))
    b=list(map(int,input().split()))
    k=min(a)
    t=min(b)
    if k==0 and t!=0:
        print(a.index(min(a))+1,1)
    elif t==0 and k!=0:
        print(N,b.index(min(b))+1)
    else:
        print(a.index(min(a))+1,b.index(min(b))+1)
else:
    if M>1:
        b=(input().split())
        b=list(map(int,b))
        print(1,b.index(min(b))+1)
    elif M==1:
        print('1 1')
