'''
 # SW Expert Academy 2068: 최대수 구하기
 # D1
 # 21.1.31 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys

T = int(input())
for test_case in range(1, T + 1):
    l = [int(x) for x in input().split()]

    print(f"#{test_case} {max(l)}")