a=0
c=0
d=0
for i in range(20):
    b=list(map(str,input().split()))
    if len(b)!=0 and b[2]!="P":
        if b[2]=="A+":
            d=4.5
        elif b[2]=="A0":
            d=4.0
        elif b[2]=="B+":
            d=3.5
        elif b[2]=="B0":
            d+=3.0
        elif b[2]=="C+":
            d=2.5
        elif b[2]=="C0":
            d=2.0
        elif b[2]=="D+":
            d=1.5
        elif b[2]=="D0":
            d=1.0
        elif b[2]=="F":
            d=0.0
        a+=(d*(float(b[1])))
        c+=float(b[1])
        d=0
    elif len(b)==0:
        break
if c!=0:
    print(round((a/c),6))
elif c==0.0:
    print("0.000000")