'''
 * 백준 10757: 큰 수 A+B - 파이썬 같은 언어는 10,000자리 정도의 자연수도 자유롭게 다룰 수 있습니다. 하지만 C/C++이라면 이 문제를 어떻게 풀까요? C/C++ 사용자가 아니더라도 고민해 보면 좋을 것입니다
 * 단계별로 풀어보기: 기본 수학1
 * 알고리즘 분류: 수학, 구현, 사칙연산, 임의 정밀도 / 큰 수 연산
 * 21.5.7 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys
# l = [int(x) for x in input().split()]     # comprehension

A, B = [int(x) for x in input().split()]

print(A + B)

# print(f"#{test_case} {ans}")