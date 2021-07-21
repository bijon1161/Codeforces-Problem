# -*- coding: utf-8 -*-
"""
Created on Wed Jul 21 14:13:49 2021

@author: Admin
"""

for _ in range(int(input())):
    input()
    xa, ya = map(int, input().split())
    xb, yb = map(int, input().split())
    xf, yf = map(int, input().split())
    if ya == yb == yf and (xa < xf) != (xb < xf) or xa == xb == xf and (ya < yf) != (yb < yf):
        print(2+abs(xa-xb)+abs(ya-yb))
    else:
        print(abs(xa-xb)+abs(ya-yb))