# -*- coding: utf-8 -*-
"""
Created on Wed Aug 11 10:36:48 2021

@author: Admin
"""



for i in range(int(input())):
    n, k = list(map(int, input().split()))
    ls = list(map(int, input().split()))
    st = max(0, n - 2 * k - 1)
    
    ma = -1e12
    for i in range(max(st - 1, 0), n):
        for c in range(i + 1, n):
            ma = max(ma, (i + 1) * (c + 1)  - (ls[i] | ls[c]) * k)
            
            
    print(ma)
            
        
