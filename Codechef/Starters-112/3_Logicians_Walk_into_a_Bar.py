for _ in range(int(input())):
    n=int(input())
    s=input()
    no=True
    for i in range(n):
        if s[i]=='0' or no == False:
            print("NO")    
            no = False
        elif i==n-1:
            print("YES" if no else "NO")
       
        else:
            print("IDK")