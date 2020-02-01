''' 2019.9.17 '''

n = int(input())
memberlist = {}
for i in range(0,n):
    string = input().split()
    name = string[1]
    act = string[0]
    if act == 'entry':
        if name not in memberlist.keys():
            print(name,'entered')
            memberlist[name] = 1
        elif memberlist[name] == 0:
            print(name,'entered')
            memberlist[name] += 1
        else:
            print(name,'entered (ANOMALY)')
    else:
        if name in memberlist.keys() and memberlist[name] > 0:
            print(name,'exited')
            memberlist[name] = 0
        else:
            print(name,'exited (ANOMALY)')
