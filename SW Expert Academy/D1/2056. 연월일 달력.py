'''
 # SW Expert Academy 2056. 연월일 달력
 # D1
 # 21.2.2 try: 1
'''
#sys.stdin = open("input.txt", "r") #import sys

T = int(input())
for test_case in range(1, T + 1):
    # l = [int(x) for x in input().split()]
    inputs = input()
    ans = "-1"

    year = inputs[0:4]
    month = inputs[4:6]
    day = inputs[6:]

    if (month == "01" or month == "03" or month == "05" or month == "07" or month == "08" or month == "10" or month == "12") and "0" < day <= "31":
        ans = year + '/' + month + '/' + day;
    elif (month == "04" or month == "06" or month == "09" or month == "11") and "0" < day <= "30":
        ans = year + '/' + month + '/' + day;
    elif month == "02" and "0" < day <= "28":
        ans = year + '/' + month + '/' + day;


    print(f"#{test_case} {ans}")