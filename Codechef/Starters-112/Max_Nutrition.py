for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    dict={i:[0] for i in range(1,n+1)}
    for i,j in zip(a,b):
        dict[i].append(j)
    ans=0
    for i in dict:
        dict[i].sort(reverse=True)
        ans+=max(0,dict[i][0])
       # print(dict[i][0])
    print(ans)
