# -*- coding: utf-8 -*-
"""
Created on Fri Jul 23 12:05:46 2021

@author: Admin
"""


for i in range(int(input())):
	s = input()
	l = len(s)
	if s.count('a') == 0:
		print('NO')
		continue
	a = s.index('a')
	le = a
	ri = a + 1
	alp = 'abcdefghijklmnopqrstuvwxyz'
	FL = True
	for i in range(l):
		if le >= 0 and s[le] == alp[i]:
			le -= 1
		elif ri < l and s[ri] == alp[i]:
			ri += 1
		else:
			FL = False
			break
	print('YES' if FL else 'NO')
