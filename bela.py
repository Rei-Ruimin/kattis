''' 2019.9,17 '''

N,B = map(str,input().split())
N = int(N)
dom = {'A':11,'K':4,'Q':3,'J':20,'T':10,'9':14,'8':0,'7':0}
indom = {'A':11,'K':4,'Q':3,'J':2,'T':10,'9':0,'8':0,'7':0}
pt = 0
for i in range(0,4*N):
    string = input()
    if string[1] == B:
        pt += dom[string[0]]
    else:
        pt += indom[string[0]]
print(pt)
