'''
 * 백준 1463: 1로 만들기 - 메모이제이션으로 N을 1로 바꾸기 위해 주어진 연산을 몇 번 사용하는지 계산하는 문제
 * 단계별로 풀어보기: 동적 계획법1
 * 알고리즘 분류: 다이나믹 프로그래밍
 * 21.3.30 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys
# l = [int(x) for x in input().split()]

N = int(input())
dp = [0, 0]

for i in range(2, N + 1):
    dp.append(1000001)
    if i % 3 == 0 and dp[i // 3] < dp[i]: dp[i] = dp[i // 3] + 1
    if i % 2 == 0 and dp[i // 2] < dp[i]: dp[i] = dp[i // 2] + 1
    if dp[i - 1] < dp[i]: dp[i] = dp[i - 1] + 1

print(dp[N])

# print(f"#{test_case} {ans}")