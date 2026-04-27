L=int(input())
A=input()
A=list(A)
H=0
B=[]
for k in range(L):
    B.append(int(ord(A[k])-96))
for i in range(L):
    H+=B[i]*(31**i)
print(H%1234567891)