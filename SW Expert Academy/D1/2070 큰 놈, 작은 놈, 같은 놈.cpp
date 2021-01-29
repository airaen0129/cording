/*******************************************
 * SW Expert Academy 2070: Å« ³ð, ÀÛÀº ³ð, °°Àº ³ð
 * D1
 * 21.1.30 try: 1
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
		int a, b;
		std::cin >> a >> b;

		char ans;
		if (a > b) ans = '>';
		else if (a < b) ans = '<';
		else ans = '=';
		
		printf("#%d %c\n", test_case, ans);
		//std::cout << "#" << test_case << ' ' << sum / 10 << '\n';
	}
	
	return 0;
}