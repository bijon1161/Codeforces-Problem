# -*- coding: utf-8 -*-
"""
Created on Sun Aug  8 17:32:41 2021

@author: Admin
"""

for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=0
    for i in range(0,n-1):
        ans=max(ans,a[i]*a[i+1])
    print(ans)