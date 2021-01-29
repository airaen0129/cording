'''
 # SW Expert Academy 2070: 큰 놈, 작은 놈, 같은 놈
 # D1
 # 21.1.30 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys

T = int(input())
for test_case in range(1, T + 1):
    l = [int(x) for x in input().split()]

    if l[0] > l[1]:
        ans = '>'
    elif l[0] < l[1]:
        ans = '<'
    else:
        ans = '='
    # print("#{0} {1:.0f}".format(test_case, sum(l) / 10))
    # print("#%d %.0f" % (test_case, sum(l) / 10))
    print(f"#{test_case} {ans}")