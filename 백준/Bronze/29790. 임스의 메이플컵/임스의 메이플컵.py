n,u,l=map(int,input().split())
if n>=1000:
    if u>=8000 or l>=260:
        print("Very Good")
    elif u<8000 and l<260:
        print("Good")
else:
    print("Bad")