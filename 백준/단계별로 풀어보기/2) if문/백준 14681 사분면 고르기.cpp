/*******************************************
 * ���� 14681: ��и� ���� - ���� ��� ��и鿡 �ִ��� �˾Ƴ��� ����
 * �ܰ躰�� Ǯ���: if��
 * 21.3.27 try: 2
 *******************************************/
#include <iostream>

int main(int argc, char** argv) {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	//freopen("input.txt", "r", stdin); //#include <cstdio>
	
	int x, y;
	std::cin >> x >> y;

	if (x > 0 && y > 0) std::cout << 1;
	else if (x < 0 && y > 0) std::cout << 2;
	else if (x < 0 && y < 0) std::cout << 3;
	else std::cout << 4;
	
	return 0;
}