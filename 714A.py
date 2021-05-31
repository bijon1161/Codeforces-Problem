# -*- coding: utf-8 -*-
"""
Created on Tue Jun  1 00:51:44 2021

@author: Admin
"""

import math
for _ in range(int(input())):
    n,k=map(int,input().split())
    if k>math.ceil(n/2)-1:
        print(-1)
    else:
        l=[]
        for i in range(n-k):
            l.append(i+1)
        j=1
        for i in range(n-k,n):
            l.insert(j,i+1)
            j+=2
        print(*l)

