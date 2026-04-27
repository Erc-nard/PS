total=0
flag=0
list = [int(input()) for i in range(9)]
for i in range(9):
    total+=list[i]
for i in range(9):
    now=total
    now-=list[i]
    for j in range(9):
        now2=now
        if(i!=j):
            now2-=list[j]
            if(now2==100):
                a=list[j]
                b=list[i]
                list.remove(a)
                list.remove(b)
                list.sort()
                for i in range(7):
                    print(list[i])
                flag=1
                break
    if(flag==1):break