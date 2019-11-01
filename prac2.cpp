#include <iostream>//콘솔화면 출력 라이브러리
#include <stdio.h>
#include <string>//string 형식 인식하려고 할때
#include <algorithm>
#include <vector>

using namespace std;
#include "function_de.h"//다른 파일에 함수 있을 때
int main() {
	string val1, val2;
	bool result = 0;//0이면 진거 1이면 이긴거
	vector <string> rps = { "scissor","rock","paper" };
	cin >> val1;
	if (val1 == "rock") {
		result = 1;
	}
	else if (val1 == "paper") {
		result = 2;
	}
	else if (val1 == "scissor") {
		result = 0;
	}
	/*switch (result) {
	case 0:

		cout << rps[0] << "\n" << val1 << "\n" << ":lose";
		break;
	case 1:
		cout << rps[0] << "\n" << val1 << "\n" << ":win";
		break;
	case 2:
		cout << rps[0] << "\n" << val1 << "\n" << ":both win";

	}*/
	for (int i = 0; i < 3; i++) {

		if (i == result) {
			cout <<"컴퓨터:" <<rps[i] << "\n나:" << val1 << "\n" << ":both win\n";
		}
		else if (i > result) {
			cout << "컴퓨터:" << rps[i] << "\n나:" << val1 << "\n" << ":win\n";
		}
		else if(i<result){
			cout << "컴퓨터:" << rps[i] << "\n나:" << val1 << "\n" << ":lose\n";

		}

	}
	/*
	int me, you, decision;
	int count=0;
	for(you=getYours(),me=getMine(count++);you !=3;you=getYours(),me=getMine(count++)){
	decision=getDecision(me,you);
	printMessage(me,you,decision);
	count+=you;//getMine(count)로 바꾸면 랜덤하게 바뀜.
	}}
	*/

	system("pause");
	return 0;
}
int getYours() {
	cout << "Give yours";
	string yours;
	cin >> yours;
	if (yours== "r") return 0;
	if (yours == "s") return 1;
	if (yours == "p") return 2;
	return 3;
}
void printMessages(int me, int you, int decision) {
	string strMe, strYou, strDec;
	switch (me) {
	case 0:
		strMe = "r"; break;
	case 1:
		strMe = "s"; break;
	case 2:
		strMe = "p"; break;

	}
	switch (you) {
	case 0:
		strYou = "r"; break;
	case 1:
		strYou = "s"; break;
	case 2:
		strYou = "p"; break;

	}
	switch (decision) {
	case 0:
		strDec = "lose"; break;
	case 1:
		strDec = "win"; break;
	case 2:
		strDec = "we win"; break;

	}
	cout << strMe << "" << strYou<<""<<strDec;

}
int getDecision(int me, int you) {
	if (me == you)return 2;
	if (((me + 1) % 3) == you) return 0;
	return 1;
}
int getMine() {
	return 1;
}
/*
int getMine(int count){
return count%3;
}
string getDecString(int dec){
switch (dec){
case 0: return "you lose";
}
return "I dont know";
}
string getString(int val){
switch(val){
case 0: return "r";

}
}
*/

