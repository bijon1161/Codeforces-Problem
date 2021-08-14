# -*- coding: utf-8 -*-
"""
Created on Sat Aug 14 11:31:08 2021

@author: Admin
"""

t = int(input())
for _ in range(t):
	n = int(input())
	print(max(15, (n + 1) // 2 * 5))
