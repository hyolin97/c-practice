#include <iostream>
#include <vector>
#include <algorithm>
#include<Windows.h>
using namespace std;
/*int glo=0;
class My_vectors {
	vector <int> v;
public:
	int largest() {
		int r = 0;
		while (cin >> r) {
			for (int i = 0; i < v.size(); i++) {
				v.push_back(r);
			}
			if (r == 10) {
				return 10;
			}

		}		
		glo++;
		
		return 0;

	}
private:
	int val1;
};
int main() {
	int larg = 0;
	My_vectors my;
	my.largest();
	cout << glo;
}*/

class numbers {
	
	int min=0;
	double mean = 0;
 int median = 0;
public:
	numbers() { this->n = 0; }//»ý¼ºÀÚ
	numbers(int n) { this->n = n; }
	numbers(numbers &copy) { this->n = copy.n; }
	
	int getMin(vector <int> total) {
		for (int i = 0; i < total.size(); i++) {
			min = total[0];
			if (min >= total[i]) {
				min = total[i];				
			}			
		}		
		return min;

	}
	int getMean(vector <int> total) {
		for (int i = 0; i < total.size(); i++) {
			mean += total[i];
		}
		mean = mean/total.size();
		return mean;

	}
	int getMedian(vector <int> total) {
		sort(total.begin(), total.end());
		median = total[total.size() / 2];
		return median;
	}
private:
	int n = 0;
};
int main() {
	vector <int> total;
	numbers num1;
	int val1,count=0;
	while (cin >> val1) {
		count++;		
		total.push_back(val1);
				
		if (count > 6)break;
	}
	
	cout << num1.getMin(total)<<"\n" <<num1.getMean(total)<<"\n"<<num1.getMedian(total)<< "\n";
	system("pause");


}