/*******************************************
 * 백준 19940: 피자 오븐
 * Olympiad > 한국정보올림피아드 > KOI 2020 1차대회 > 초등부 2번
 * 20.11.5 try: 2
 *
 * 1. 35초과면 addh를 추가한다.
 * 2. 10분단위를 우선 선택한다.
 * 3. 1분단위를 선택한다.
 *******************************************/
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;

		int oven[5] = { 0, };

		// 60 자리
		oven[0] = n / 60;
		if (n % 60 > 35) ++oven[0];
		n -= oven[0] * 60;

		// 10 자리
		if (n > 0) {
			oven[1] = n / 10;
			if (n % 10 > 5) ++oven[1];
			n -= oven[1] * 10;
		} else {
			oven[2] = n / -10;
			if (-n % 10 > 5) ++oven[2];
			n -= oven[2] * -10;
		}

		// 1의 자리
		if (n > 0) oven[3] = n;
		else oven[4] = -n;

		for (const int i : oven) std::cout << i << ' ';
		std::cout << '\n';
	}

	return 0;
}
