#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the organizingContainers function below.
def organizingContainers(container):
    containerCapacity=[]
    typeCount=[]
    for i in range(len(container)):
        containerCapacity.append(sum(container[i]))
        typeCount.append(sum(container[x][i] for x in range(len(container))))

    if sorted(containerCapacity)==sorted(typeCount):
        return "Possible"
    else:
        return "Impossible"

if __name__ == '__main__':
    q = int(input())
    for q_itr in range(q):
        n = int(input())
        container = []
        for _ in range(n):
            container.append(list(map(int,input().strip().split())))
        result = organizingContainers(container)
        print(result)
