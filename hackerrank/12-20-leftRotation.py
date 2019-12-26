#!/bin/python3

import math
import os
import random
import re
import sys

def leftRotation(n,d,a):
    b = a[d:]+a[0:d]
    print(' '.join(str(x) for x in b))

if __name__ == '__main__':
    nd = input().split()
    n = int(nd[0])
    d = int(nd[1])
    a = list(map(int, input().rstrip().split()))
    leftRotation(n,d,a)