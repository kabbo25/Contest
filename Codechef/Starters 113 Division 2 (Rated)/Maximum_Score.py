from collections import Counter

for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    item_count=Counter(a);
    one=0;
    zero=0;
    for a,b in item_count.items():
        if(a==1):
            one=b;
        else:
            zero=b;
    print(min(one,zero))
    