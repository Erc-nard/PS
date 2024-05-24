n,m=map(int,input().split())
prime=[] #이전 소수들로 나눠지는지 확인하면됨
prime.append(2) #2 미리 넣어두기

sqq=0

for i in range(m):
    if i*i>=m:
        sqq=i
        break #math import하지말고 제곱근 그냥 구하기

for i in range(3,sqq): #m까지 전부다 보면서 소수구할필요 x
    if i%2!=0:         #m의 제곱근까지만 소수 구하면됨
        check=0
        for j in range(len(prime)): #이미 구한 소수들로 나눠서 소수인지 확인
            if((int)(i%prime[j])==0):
                check=1
                break
            if prime[j]>i:
                break
        if check==0:
            prime.append(i) #소수면 리스트에 넣기

for i in range(n,m+1): #n~m까지수를 이미 구한 소수들로 나눠서 소수인지 확인
    check=0
    for j in prime:
        if(i!=j and i%j==0):
            check=1
            break
    if check==0 and i!=1: #1일때 제외
        print(i)


