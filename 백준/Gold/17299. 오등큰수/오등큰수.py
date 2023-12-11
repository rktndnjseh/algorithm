import sys

n = int(sys.stdin.readline())
array = list(map(int, sys.stdin.readline().split()))

result = [-1] * n
count = [0] * (max(array) + 1)  # 배열의 크기를 최댓값 + 1로 설정

for num in array:
    count[num] += 1

stack = []
for i, num in enumerate(array):
    while stack and count[array[stack[-1]]] < count[num]:
        result[stack.pop()] = num
    stack.append(i)

print(*result)
