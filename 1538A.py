# -*- coding: utf-8 -*-
"""
Created on Tue Jun 22 19:26:50 2021

@author: Admin
"""

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    mn, mx = a.index(min(a)), a.index(max(a))
    print(min(max(mn, mx) + 1, n - min(mn, mx), n - mn + mx + 1, n - mx + mn + 1))