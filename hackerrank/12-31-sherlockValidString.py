#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the isValid function below.
def isValid(s):
    d1={}
    for c in s:
        d1[c]=s.count(c)
    d1val=list(d1.values())
    d2={}
    for x in d1val:
        d2[x]=d1val.count(x)
    d2key=list(d2.keys())
    if len(d2)<=1:
        return "YES"
    else:
        if min(list(d2.values())) == 1 and len(d2) == 2 and abs(d2key[0]-d2key[1]) == 1:
            return "YES"
        else :
            return "NO"
s = input()
print(isValid(s))

