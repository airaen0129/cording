/*******************************************
 * SW Expert Academy 2056. 연월일 달력
 * D1
 * 21.2.2 try: 2
 *******************************************/
#include <iostream>
#include <string>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int test_case;
	int T;
	
	//freopen("input.txt", "r", stdin); //#include <cstdio>
	std::cin >> T;

	for (test_case = 1; test_case <= T; ++test_case) {
		std::string input;
		std::string ans = "-1";

		std::cin >> input;

		std::string year = input.substr(0, 4);
		std::string month = input.substr(4, 2);
		std::string day = input.substr(6, 2);

		switch (std::stoi(month)) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day > "0" && day <= "31")
				ans = year + '/' + month + '/' + day;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day > "0" && day <= "30")
				ans = year + '/' + month + '/' + day;
			break;
		case 2:
			if (day > "0" && day <= "28")
				ans = year + '/' + month + '/' + day;
			break;
		default:
			break;
		}
		
		std::cout << "#" << test_case << ' ' << ans << '\n';
	}
	
	return 0;
}
