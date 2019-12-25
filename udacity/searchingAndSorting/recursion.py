# Fibonocci

def fibonocci(number):
    if number==1:
        return 0
    elif number==2:
        return 1
    else:
        return fibonocci(number-1)+fibonocci(number-2)

print(fibonocci(5))