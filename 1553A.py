# -*- coding: utf-8 -*-
"""
Created on Fri Jul 23 19:10:06 2021

@author: Admin
"""

for _ in range(int(input())):
    p=input()
    s=list(map(int,p))
    if s[0]<9 and len(s)==1:
        print("0")
    elif s[0]==9 and len(s)==1:
        print("1")
    elif s[-1]==9 and len(s)>1:
        print((int(p)//10)+1)
    elif s[-1]!=9 and len(s)>1:
        print(int(p)//10)
    else:
        print("0")
    
    