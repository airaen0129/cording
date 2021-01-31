/*******************************************
 * SW Expert Academy 2068: 최대수 구하기
 * D1
 * 21.1.31 try: 1
 *******************************************/
#include <algorithm>
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
		int nums[10];

		for (int i = 0; i < 10; ++i) {
			std::cin >> nums[i];
		}
		
		printf("#%d %d\n", test_case, *std::max_element(nums, nums + 10));
	}
	
	return 0;
}