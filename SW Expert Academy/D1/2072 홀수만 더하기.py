#sys.stdin = open("input.txt", "r") #import sys

T = int(input())
for test_case in range(1, T + 1):
    l = (int(x) for x in input().split() if int(x) % 2 == 1)

    print("#{}".format(test_case), sum(l))