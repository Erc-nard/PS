N=int(input())
a,k,i,t=[],0,0,0
a=list(input())
while t<N:
    if a[i]=='s':
        k+=1
        i+=8
    else:
        k-=1
        i+=7
    t+=1
if k==0:
    print("bigdata? security!")
elif k>0:
    print("security!")
else:
    print("bigdata?")