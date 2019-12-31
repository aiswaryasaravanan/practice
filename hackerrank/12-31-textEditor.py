
times=int(input())
stack=[]
s=""
for time in range(times):
    option=input().split(' ')
    if int(option[0]) == 1:
        stack.append(s)
        s=s+option[1]
    elif int(option[0]) == 2:
        stack.append(s)
        if len(s)-int(option[1]) >= 0 :
            s=s[:len(s)-int(option[1])]
        else :
            s=""
    elif int(option[0]) == 3:
        if int(option[1])-1 in range(len(s)):
            print(s[int(option[1])-1])
    else :
        s=stack.pop()
