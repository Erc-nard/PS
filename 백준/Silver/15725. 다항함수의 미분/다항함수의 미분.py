a=list(input())
if "x" in a:
    b=(a.index("x"))
    if b==0:
        print("1")
    elif b!=0 and a[0]!="-":
        c=a[:b]
        print("".join(c))
    elif b!=0 and b!=1 and a[0]=="-":
        c=a[1:b]
        print("-"+"".join(c))
    elif b!=0 and b==1 and a[0]=="-":
        c=a[1:b]
        print("-1")
else:
    print("0")
