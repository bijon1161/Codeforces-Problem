# -*- coding: utf-8 -*-
"""
Created on Tue Jun 22 19:51:23 2021

@author: Admin
"""

for _ in range(int(input())):
    n= int(input())
    c = 0
    cou = 0
    a = list(map(int, input().split()))
    for i in a:
        c += i;
    if c%n==0:
        l = c/n
        for i in a:
            if i>l:
                cou+=1
        print(cou)
    else:
        print("-1")
        
        
        
    
    
    