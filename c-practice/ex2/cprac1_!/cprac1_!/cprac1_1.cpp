#include <iostream>//콘솔화면 출력 라이브러리
#include <stdio.h>
#include <string>//string 형식 인식하려고 할때
#include <algorithm>
#include <vector>
using namespace std;
void prime(int n);
bool isPrime(int n);
int main() {
	int n = 0;
	int val1 = 0;
	cin >> n;
	vector <int> arr(n);
	vector <int> arr2(n);
	for (int i = 2; i <= n; i++) {
		arr.push_back(i);
		cout << arr[i];
	}

	for (int j = 2; j <= n; j++) {
		for (int i = 2; i <= n; i++) {
			if (arr[j] != i && arr[j] % i == 0) {
				arr[j] = 0;
			}
		}

	}
	for (int i = 2; i <= n; i++) {

		if (arr[i] != 0)

			cout << arr[i] << " ";

	}


	/*for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			cout << i << "";
		}
	}*/

	system("pause");
	return 0;
}
void prime(int n) {
	vector <int> arr;
	vector <int> arr2;
	for (int i = 2; i <= n; i++) {
		arr.push_back(i);
	}
	for (int j = 2; j <= n; j++) {
		for (int i = 2; i <= n; i++) {
			if (arr[j] != i && arr[j] % i == 0) {
				arr[j] = 0;
			}
		}

	}
	for (int i = 2; i <= n; i++) {

		if (arr[i] != 0)

			cout << arr[i] << " ";

	}

}
bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}