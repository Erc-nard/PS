n,m=map(int,input().split())
prime=[] #이전 소수들로 나눠지는지 확인하면됨
prime.append(2)

sqq=0

for i in range(m):
    if i*i>=m:
        sqq=i
        break

for i in range(3,sqq):
    if i%2!=0:
        check=0
        for j in range(len(prime)):
            if((int)(i%prime[j])==0):
                check=1
                break
            if prime[j]>i:
                break
        if check==0:
            prime.append(i)

for i in range(n,m+1):
    check=0
    for j in prime:
        if(i!=j and i%j==0):
            check=1
            break
    if check==0 and i!=1:
        print(i)


