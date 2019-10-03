#include <iostream>//콘솔화면 출력 라이브러리
#include <stdio.h>
#include <string>//string 형식 인식하려고 할때
#include <algorithm>
#include <vector>
using namespace std;
void prime(int n);
bool isPrime(int n);
int main() {
	/*cout << "Hello world"<<std::endl;//출력 대상
	cout << "1613509 it공학과 최효린" << std::endl;
	cout << "Please enter you first name and second names\n";
	string first_name;//string declaration 이 필요
	string second_name;
	cin >> first_name>>second_name;
	string name = first_name + "" + second_name;
	cout << "hello," << name << "\n";
	//std::endl 개행 처리
	//std::cin >>
	const double cm_per_inch = 2.54;
	//cm_per_inch++;const변수는 수정 불가
	int length = 1;
	while (length != 0) {
		cout << "Please enter a length in inches\n";
		cin >> length;
		cout << length << "in.=" << cm_per_inch * length << "cm.\n";
		cout << length << "in.=" << length* cm_per_inch  << "cm.\n";
	}
	int a = 20000;
	char c=a;
	int b = c;
	if (a != b)
	{
		cout << "oops!" << a << "!=" << b << "\n";
	}


	else{ cout << "WOW!WH HAVE LARGE CHARACTERS\N"; }
	int val1, val2 = 0;

	cin >> val1 >> val2;
	if (val1 > val2) {
		cout << "smallest:" << val2<<"\n";
		cout << "largest:" << val1 << "\n";
		cout << "difference:" << val1 - val2 << "\n";

	}
	else {
		cout << "smallest:" << val1 << "\n";
		cout << "largest:" << val2 << "\n";
		cout << "difference:" << val2 - val1 << "\n";

	}

	cout << "sum:" << val1 + val2 << "\n";
	cout << "product:" << val1 * val2 << "\n";
	cout << "ratio:" << val1 /val2 << "\n";
	int i = 0;
	for (int i = 0; i < 10; i++) {
		cout << i << "n";
}
	cout << i;
	vector <double> temps;
	double temp;
	while (cin >> temp) temps.push_back(temp);
	double sum = 0;
	//for (int i = 0; i < temps.size(); ++i) sum += temps[i];
	for (int i :temps) sum +=i;
	cout << "Mean temperature:" <<sum/temps.size() << '\n';

	sort(temps.begin(),temps.end());
	cout << "Median temperature:" << temps[temps[temps.size() / 2]] << '\n';
	vector <string> words;
	for (string s; cin >> s && s != "quit";) {
		words.push_back(s);
	}
	sort(words.begin(), words.end());
	for (string s : words) {
		cout << s << '\n';
	}
	vector <double> distance;
	double distance2, smallest, greatest,sum=0;
	while (cin >> distance2) {
		distance.push_back(distance2);
		if (distance2 == 0) {
			break;
		}
	}

	for (int i = 1; i < distance.size(); ++i) {
		sum += distance[i];
		if (distance[i-1] < distance[i]) {
			smallest = distance[i-1];
			greatest = distance[i];
		}

	}
	cout << "smallest:" << smallest << "\ngreatest:" << greatest << "\n";
	cout << "Mean:" << sum / distance.size() << '\n';*/
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
	for (int i = 2; i <=n; i++) {
		arr.push_back(i);
	}
	for (int j = 2; j <=n; j++) {
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