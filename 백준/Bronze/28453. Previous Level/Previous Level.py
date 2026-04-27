N=int(input())
a=list(map(int,input().split()))
for i in range(N):
    if a[i]==300:
        print("1",'',end='')
    elif 275<=a[i]<300:
        print("2",'',end='')
    elif 250<=a[i]<275:
        print("3",'',end='')
    else:
        print("4",'',end='')