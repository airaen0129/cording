/*******************************************
 * ���� 10757: ū �� A+B - ���̽� ���� ���� 10,000�ڸ� ������ �ڿ����� �����Ӱ� �ٷ� �� �ֽ��ϴ�. ������ C/C++�̶�� �� ������ ��� Ǯ���? C/C++ ����ڰ� �ƴϴ��� ����� ���� ���� ���Դϴ�
 * �ܰ躰�� Ǯ���: �⺻ ����1
 * �˰��� �з�: ����, ����, ��Ģ����, ���� ���е� / ū �� ����
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

	bool carries = false; // �޾ƿø���

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