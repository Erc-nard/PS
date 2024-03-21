m,n=map(int,input().split())
for i in range(m,n+1):
    if i%2!=0 and i%3!=0 and i%5!=0 and i%7!=0:
        print(i)
    if i==1 or i==2 or i==3 or i==5 or i==7:
        print(i)