# -*- coding: utf-8 -*-
"""
Created on Fri Jul 16 12:52:51 2021

@author: Admin
"""

# cook your dish here
t=int(input())
for _ in range(t):
    n,a,b=map(int,input().split())
    s=input()
    if(b>=0):
        print(n*(a+b))
    else:
        c=1
        for i in range(1,n):
            if(s[i] != s[i-1]):
                c+=1
        print((n*a)+(b*(c//2+1)))