import sys

# 문자열 스택
left_stack = list(sys.stdin.readline().strip())
right_stack = []

# 명령어 입력
num_commands = int(sys.stdin.readline().strip())

for _ in range(num_commands):
    command = sys.stdin.readline().split()

    if command[0] == 'L' and left_stack:
        right_stack.append(left_stack.pop())
    elif command[0] == 'D' and right_stack:
        left_stack.append(right_stack.pop())
    elif command[0] == 'B' and left_stack:
        left_stack.pop()
    elif command[0] == 'P':
        left_stack.append(command[1])

# right_stack을 뒤집어서 left_stack과 합친 후 문자열로 변환하여 출력
right_stack.reverse()
print(''.join(left_stack + right_stack))
