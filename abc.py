''' 2020.1.15 '''
numl = list(map(int,input().split()))
numl.sort()
string = input()
for i in range(3):
    if string[i] == 'A':
        print(numl[0], end = ' ')
    elif string[i] == 'B':
        print(numl[1], end = ' ')
    else:
        print(numl[2], end = ' ')
