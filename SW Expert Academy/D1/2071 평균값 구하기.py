'''
 # SW Expert Academy 2071: 평균값 구하기
 # D1
 # 21.1.29 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys

T = int(input())
for test_case in range(1, T + 1):
    l = (float(x) for x in input().split())

    # print("#{0} {1:.0f}".format(test_case, sum(l) / 10))
    # print("#%d %.0f" % (test_case, sum(l) / 10))
    print(f"#{test_case} {sum(l) / 10:.0f}")