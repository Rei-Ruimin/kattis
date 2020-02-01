Ncase = int(input())
for i in range(0,Ncase):
    G = int(input())
    Clist = list(map(int,input().split()))
    for num in Clist:
        if Clist.count(num) == 1:
            break
    print('Case #{}: {}'.format(i+1,num))
