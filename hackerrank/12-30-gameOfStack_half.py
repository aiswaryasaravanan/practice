def popValue(a,b):
    if len(a)>0 and len(b)>0:
        return a.pop() if a[len(a)-1] < b[len(b)-1] else b.pop()
    elif len(a)==0 and len(b)>0: 
        return b.pop()
    else :
        return a.pop()

def twoStacks(x, a, b):
    a.reverse()
    b.reverse()
    count=0
    poppedValue=popValue(a,b)
    while x-poppedValue >= 0:
        x=x-poppedValue
        count+=1
        poppedValue=popValue(a,b)
    return count

a=[4,2,4,6,1]
b=[2,1,8,5]
print(twoStacks(10,a,b))