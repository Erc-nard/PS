a=list(input())
p=0
c=a.count('D')
if c==0:
    print("0")
else:
    for i in range(c):
        b=a.index("D")
        if b<=len(a)-4:
            if a[b+1]=='K' and a[b+2]=='S' and a[b+3]=='H':
                p+=1
                a.remove(a[b])
            else:a.remove(a[b])
        else:
            a.remove(a[b])
print(p)
        