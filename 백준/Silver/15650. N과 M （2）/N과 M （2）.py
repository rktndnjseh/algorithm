n, m = map(int, input().split())

arr = [0] * m  # Initialize arr with length m

def dfs(start, cnt):
    if cnt == m:
        for i in range(m):
            print(str(arr[i]) + " ", end="")
        print()
        return
    
    for i in range(start, n + 1):
        arr[cnt] = i
        dfs(i + 1, cnt + 1)  # i+1부터 탐색을 시작하여 오름차순을 보장

dfs(1, 0)
