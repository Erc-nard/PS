n,m=map(int,input().split())
prime=[] #이전 소수들로 나눠지는지 확인하면됨
prime.append(2)
num=0
for i in range(3,m):
    if(i%2!=0):
        check=0
        for j in range(num):
            if((int)(i%prime[j])==0):
                check=1
                break
        if check==0:
            prime.append(i)
            num+=1

for i in range(len(prime)):
    if(prime[i]<n):
        continue
    if(prime[i]>m):
        break
    print(prime[i])


