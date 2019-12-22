#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the gridSearch function below.
def gridSearch(R, C, G, r, c, P):
    for RCount in range(R-r+1):
        for CCount in range(C-c+1):
            flag=1
            for rCount in range(r):
                for cCount in range(c):
                    if G[RCount+rCount][CCount+cCount]!=P[rCount][cCount]:
                        flag=0
                        break
                if not flag:
                    break
            if flag:
                return "YES"
    return "NO"
if __name__ == '__main__':
    t = int(input())
    for t_itr in range(t):
        RC = input().split()
        R = int(RC[0])
        C = int(RC[1])
        G = []
        for _ in range(R):
            G_item = input()
            G.append(G_item)
        rc = input().split()
        r = int(rc[0])
        c = int(rc[1])
        P = []
        for _ in range(r):
            P_item = input()
            P.append(P_item)
        result = gridSearch(R, C, G, r, c, P)
        print(result)