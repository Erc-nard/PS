a=1
while a!=0:
    a=input()
    if int(a)==0:
        break
    else:
        k=list(map(int,str(a)))
        if len(a)==1:
            print("yes")
        elif len(a)==3:
            if k[0]!=k[2]:
                print("no")
            else:
                print("yes")
        elif len(a)==5:
            if k[0]==k[4] and k[1]==k[3]:
                print("yes")
            else:
                print("no")
        elif len(a)==4:
            if k[0]==k[3] and k[1]==k[2]:
                print("yes")
            else:
                print("no")   
        elif len(a)==2:
            if k[0]==k[1]:
                print("yes")
            else:
                print("no")