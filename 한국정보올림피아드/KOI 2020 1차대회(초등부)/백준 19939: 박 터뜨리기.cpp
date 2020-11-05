/*******************************************
 * 백준 19939: 박 터뜨리기
 * Olympiad > 한국정보올림피아드 > KOI 2020 1차대회 > 초등부 1번
 * 20.11.5 try: 1
 *
 * 재정의: n이 1~k의 합으로 나누어 떨어지는 지 알아내는 문제
 *******************************************/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int n = 0, k = 0;
	std::cin >> n >> k;

	int sum = k * (k + 1) / 2;

	if (n < sum) std::cout << "-1";
	else if (!((n - sum) % k)) std::cout << k - 1;
	else std::cout << k;

	return 0;
}
