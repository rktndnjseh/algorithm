n,m= map(int,input().split())

def dfs(start,depth,s):
    if depth==m:
        print(' '.join(map(str,s)))
        return
    
    for i in range(start,n+1):
        s.append(i)
        dfs(i,depth+1,s)
        s.pop()
dfs(1,0,[])
