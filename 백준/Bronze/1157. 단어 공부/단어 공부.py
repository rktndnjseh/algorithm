word = input().upper()

count = [0] * 26
# 크기는 26이고, 초기값은 0이다

# 각 알파벳 빈도수 계산
for ch in word:
    if ch.isalpha():
        index = ord(ch) - ord('A')
        count[index] += 1

max_count = 0
answer = ''

# 가장 많이 사용된 알파벳 찾기
for i in range(len(count)):
    if count[i] > max_count:
        max_count = count[i]
        answer = chr(ord('A') + i)
    elif count[i] == max_count:
        answer = '?'

print(answer)
