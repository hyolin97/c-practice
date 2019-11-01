#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	int val4;
	cout << "2번문제입니다.\n";
	cout << "짝수인지 홀수인지 확인할 숫자를 입력하세요:\n";
	cin >> val4;
	if (val4 % 2 == 0) {
		cout <<val4<< "은 짝수입니다.\n";
	}
	else {
		cout << val4 << "은 홀수입니다.\n";

	}
	system("pause");
}