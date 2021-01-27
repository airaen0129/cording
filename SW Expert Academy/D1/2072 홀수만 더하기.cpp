/*******************************************
 * SW Expert Academy 2072: 홀수만 더하기
 * D1
 * 21.1.27 try: 1
 *******************************************/
#include <iostream>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int test_case;
	int T;
	
	//freopen("input.txt", "r", stdin); //#include <cstdio>
	std::cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int sum = 0;
		
		for (int j = 0; j < 10; ++j) {
			int n;
			std::cin >> n;
			if (n % 2 == 1) sum += n;
		}

		std::cout << "#" << test_case << ' ' << sum << '\n';
	}
	
	return 0;
}