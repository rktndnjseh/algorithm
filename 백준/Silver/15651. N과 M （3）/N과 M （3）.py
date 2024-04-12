n, m = map(int, input().split())

arr = [0] * m

def dfs(start, cnt):
    if cnt == m:
        for i in range(m):
            print(str(arr[i]) + " ", end="")
        print()
        return
    for i in range(1, n + 1):
        arr[cnt] = i
        dfs(i + 1, cnt + 1)

dfs(1, 0)
