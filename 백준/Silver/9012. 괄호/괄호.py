T=int(input())
for i in range(T):
    a=input()
    a=list(a)
    if a.count("(")==a.count(")"):
        while len(a)>=1:
            if a[0]==")":
                print("NO")
                break
            elif a[0]=="(":
                a.remove("(")
                a.remove(")")  
        if len(a)==0:
            print("YES")
            
    else:
        print("NO")