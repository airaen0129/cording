/*******************************************
 * ���� 1463: 1�� ����� - �޸������̼����� N�� 1�� �ٲٱ� ���� �־��� ������ �� �� ����ϴ��� ����ϴ� ����
 * �ܰ躰�� Ǯ���: ���� ��ȹ��1
 * �˰��� �з�: ���̳��� ���α׷���
 * 21.3.28-30 try: 2
 *******************************************/
#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	//freopen("input.txt", "r", stdin); //#include <cstdio>
	
	int N;
	std::cin >> N;
	std::vector<int> dp(N + 1);
	
	for (int i = 2; i <= N; ++i) {
		int min = 1000001;
		if (i % 3 == 0 && dp[i / 3] < min) min = dp[i / 3];
		if (i % 2 == 0 && dp[i / 2] < min) min = dp[i / 2];
		if (dp[i - 1] < min) min = dp[i - 1];
		dp[i] = min + 1;
	}

	std::cout << dp[N];
	
	return 0;
}