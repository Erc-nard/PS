a=list((input()))
if len(a)==3:
    if int(a[0])==1 and int(a[1])==0:
        print(10+int(a[2]))
    else:
        print(int(a[0])+10)
elif len(a)==2:
    print(int(a[0])+int(a[1]))
else:
    print(20)