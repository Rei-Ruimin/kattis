import sys

diction = {}
string = input()
while string != '' :
    eng,ali = string.split()
    diction[ali] = eng
    string = input()

words = sys.stdin.readlines()
for word in words:
    word = word.strip()
    if word not in diction:
        print('eh')
    else:
        print(diction[word])
