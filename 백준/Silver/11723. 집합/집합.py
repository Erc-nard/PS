import sys
input=sys.stdin.readline

S=set()
M=int(input())

for i in range(M):
    b=input()
    b.rstrip()
    a=list(map(str,b.split()))

    if a[0]=="add":
        if a[1] not in S:
            S.add(a[1])
    elif a[0]=="remove":
        if a[1] in S:
            S.remove(a[1])
    elif a[0]=="check":
        if a[1] in S:
            print("1")
        else:
            print("0")
    elif a[0]=="toggle":
        if a[1] not in S:
            S.add(a[1])
        elif a[1] in S:
            S.remove(a[1])
    elif len(a)==1 and a[0]=="all":
        S.clear
        S={'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20'}
    elif len(a)==1 and a[0]=="empty":
        S.clear()
