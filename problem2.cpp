#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	int val4;
	cout << "2�������Դϴ�.\n";
	cout << "¦������ Ȧ������ Ȯ���� ���ڸ� �Է��ϼ���:\n";
	cin >> val4;
	if (val4 % 2 == 0) {
		cout <<val4<< "�� ¦���Դϴ�.\n";
	}
	else {
		cout << val4 << "�� Ȧ���Դϴ�.\n";

	}
	system("pause");
}