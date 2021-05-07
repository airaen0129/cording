'''
 # 백준 14681: 사분면 고르기 - 점이 어느 사분면에 있는지 알아내는 문제
 # 단계별로 풀어보기: if문
 # 21.3.28 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys

#T = int(input())
#for test_case in range(1, T + 1):
# l = [int(x) for x in input().split()]
x = int(input())
y = int(input())

if x > 0 and y > 0: print(1)
elif x < 0 and y > 0: print(2)
elif x < 0 and y < 0: print(3)
else: print(4)

# print(f"#{test_case} {ans}")