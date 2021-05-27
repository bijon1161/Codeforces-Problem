# -*- coding: utf-8 -*-
"""
Created on Thu May 27 21:38:53 2021

@author: Admin
"""

for _ in range(int(input())):
	n = int(input())
	a = list(map(int, input().split()))
	a.sort()
	print(n-a.count(a[0]))