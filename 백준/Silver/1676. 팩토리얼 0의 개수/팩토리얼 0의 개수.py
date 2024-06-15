N=int(input())

def facto(a):
    result=1
    for i in range(a):
        result=result*(i+1)
    return result

a= list(map(int,str(facto(N))))

k=0
for i in range(len(a)):
    if a[-(i+1)]==0:
        k+=1
    else:
        break
print(k)