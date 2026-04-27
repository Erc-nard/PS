import math
T=int(input())
k=0
while k<T:
    H,W,N= map(int, input().split()) 
    a=math.ceil(N/H)
    if N%H==0:
        print((H)*100+(a))
    else:
        print((N%H)*100+(a))
    k+=1