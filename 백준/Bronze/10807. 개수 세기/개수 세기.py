n=int(input())
num_list = list(map(int, input().split()))
v=int(input())
cnt = 0

for i in num_list:
    if i==v:
        cnt+=1

print(cnt)
