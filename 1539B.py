# -*- coding: utf-8 -*-
"""
Created on Thu Jun 24 18:07:15 2021

@author: Admin
"""

for _ in range(int(input())):
    n,q=list(map(int,input().split()))
    song = input()
    d ={"a":"1","b":"2","c":"3","d":"4","e":"5","f":"6","g":"7","h":"8","i":"9","j":"10","k":"11","l":"12","m":"13","n":"14","o":"15","p":"16","q":"17","r":"18","s":"19","t":"20","u":"21","v":"22","w":"23","x":"24","y":"25","z":"26"}
    cou=0
    for _ in range(q):
        l,r=list(map(int,input().split()))
        new_song=""
        for i in range(l,r+1,1):
            new_song+=song[i-1]
        for i in new_song:
            cou+=int(d[i])
        print(cou)
        cou=0