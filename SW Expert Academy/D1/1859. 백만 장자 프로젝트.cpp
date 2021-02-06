/*******************************************
 * SW Expert Academy 1859. 백만 장자 프로젝트
 * D1
 * 21.2.6 try: 1
 *******************************************/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int test_case;
	int T;
		
	freopen("input.txt", "r", stdin);
	std::cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		int N;
		std::cin >> N;
		std::vector<int> vec(N);
		int big = 0;
		long long int profit = 0;
			
		for (int i = 0; i < N; ++i) std::cin >> vec[i];

		for (int i = N - 1; i >= 0; --i) {
			if (vec[i] < big) profit += big - vec[i];
			else big = vec[i];
		}
		
		std::cout << "#" << test_case << ' ' << profit << '\n';
	}
	
	return 0;
}
