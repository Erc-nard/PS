n,k=map(int,input().split())
b=list(map(int,input().split()))
for i in range(k):
    c=int((b[i]*100)/n)
    if 0<=c<=4:
        print('1',end=" ")
    elif 4<c<=11:
         print('2',end=" ")
    elif 11<c<=23:
            print('3',end=" ")
    elif 23<c<=40:
         print('4',end=" ")
    elif 40<c<=60:
         print('5',end=" ")
    elif 60<c<=77:
         print('6',end=" ")
    elif 77<c<=89:
         print('7',end=" ")
    elif 89<c<=96:
         print('8',end=" ")
    else:
         print('9',end=" ")