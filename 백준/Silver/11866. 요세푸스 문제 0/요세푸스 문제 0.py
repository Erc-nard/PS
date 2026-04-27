N,K=map(int,input().split())
ori=[]
las=[]
for i in range(N):
    ori.append(i+1)
for i in range(N):
    for i in range(K):
        if(i+1!=K):
            ori.append(ori.pop(0))
        else:
            las.append(ori.pop(0))
print("<",end="")
for i in range(N):
    if(i+1!=N):
        print(str(las[i])+",",end=" ")
    else:
        print(str(las[i]),end="")
print(">")