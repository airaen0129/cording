/*******************************************
 * 백준 10757: 큰 수 A+B - 파이썬 같은 언어는 10,000자리 정도의 자연수도 자유롭게 다룰 수 있습니다. 하지만 C/C++이라면 이 문제를 어떻게 풀까요? C/C++ 사용자가 아니더라도 고민해 보면 좋을 것입니다
 * 단계별로 풀어보기: 기본 수학1
 * 알고리즘 분류: 수학, 구현, 사칙연산, 임의 정밀도 / 큰 수 연산
 * 21.5.7 try: 2
 *******************************************/
#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>		// typeid(a).name()

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	//freopen("input.txt", "r", stdin); //#include <cstdio>

	std::string A, B, ans;
	std::cin >> A >> B;

	bool carries = false; // 받아올림수

	int i, j;
	for (i = A.length() - 1, j = B.length() - 1; i >= 0 || j >= 0; --i, --j) {
		int singleDigitCal;

		if (i < 0) singleDigitCal = B.at(j) - '0';
		else if (j < 0) singleDigitCal = A.at(i) - '0';
		else singleDigitCal = A.at(i) - '0' + B.at(j) - '0';
		
		if (carries) {
			++singleDigitCal;
			carries = false;
		}
		if (singleDigitCal >= 10) {
			carries = true;
			singleDigitCal -= 10;
		}
		ans.push_back(singleDigitCal + '0');
	}
	if (carries) ans.push_back('1');
	
	std::reverse(ans.begin(), ans.end());
	std::cout << ans << std::endl;
	
	return 0;
}