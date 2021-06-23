# -*- coding: utf-8 -*-
"""
Created on Wed Jun 23 21:08:33 2021

@author: Admin
"""

for _ in range(int(input())):
	n,x,t = list(map(int,input().split()))
	ins = min(n,t//x);print((ins*(ins-1))//2+ins*(n-ins))