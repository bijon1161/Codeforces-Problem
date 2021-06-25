n,q=map(int,input().split())
s=input()
a=[0]
for i in range(1,n+1):
    a.append(a[i-1]+ord(s[i-1])-96)
for i in range(q):
    l,r=map(int,input().split())
    print(a[r]-a[l-1])
