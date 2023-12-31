import math


def calculate_possible_positions(x1, y1, r1, x2, y2, r2):
    # 두 원의 중심 사이의 거리 계산(원의 방정식 사용)
    distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

    # 두 원이 동심원인 경우 & 반지름이 같을때
    if distance == 0 and r1 == r2:
        return -1

    # 두 원이 외접하거나 내접하는 경우
    if distance == r1 + r2 or distance == abs(r1 - r2):
        return 1

    # 두 원이 만나는 점이 두 개인 경우
    if abs(r1 - r2) < distance < r1 + r2:
        return 2

    # 두 원이 서로 만나지 않는 경우
    return 0


# 테스트 케이스 개수 입력
T = int(input())

# 각 테스트 케이스에 대해 결과 계산 및 출력
for _ in range(T):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    result = calculate_possible_positions(x1, y1, r1, x2, y2, r2)
    print(result)
