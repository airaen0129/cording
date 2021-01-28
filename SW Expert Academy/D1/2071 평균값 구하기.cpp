/*******************************************
 * SW Expert Academy 2071: 평균값 구하기
 * D1
 * 21.1.29 try: 1
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
		double sum = 0;
		
		for (int j = 0; j < 10; ++j) {
			int n;
			std::cin >> n;
			sum += n;
		}

		printf("#%d %.0f\n", test_case, sum / 10);
		//std::cout << "#" << test_case << ' ' << sum / 10 << '\n';
	}
	
	return 0;
}