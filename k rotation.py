n=int(input())
l=list(map(int,input().split()))
k=int(input())
k=k%n
p=l[:k]
q=l[k::]
p.reverse()
q.reverse()
r=p+q
r.reverse()
print(r)
