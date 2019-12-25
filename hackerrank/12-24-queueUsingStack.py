# Enter your code here. Read input from STDIN. Print output to STDOUT

from queue import LifoQueue

def transfer(stk1,stk2):
    while stk1.qsize():
        stk2.put(stk1.get())

stack1=LifoQueue()
stack2=LifoQueue()
queries=int(input())
for query in range(queries):

    type=input().split()
    if int(type[0]) == 1:
        x=int(type[1])
        stack1.put(x)
    else:
        if stack2.qsize()==0:
            transfer(stack1,stack2)
        if stack2.qsize()!=0:
            if int(type[0])==2:
                x=stack2.get()
            if int(type[0])==3:
                x=stack2.get()
                print(x)
                stack2.put(x)

    
