n=int(input())
left=0
right=n

while(left<=right):
    mid=(left+right)//2
    if(mid*mid<n):
        left=mid+1
    else:
        right=mid-1
        
print(left)