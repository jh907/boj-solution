#include <iostream>
#include <string>

using namespace std;

// 10부터는 A~Z로 표현
char intToChar(int num) {
	if (num >= 10) {
		return char('A' + num - 10);
	}
	else {
		return char('0' + num);
	}
}

string convertToBase(int decimal, int base) {
	if (decimal == 0) {return "";}

	string result = "";
	while (decimal > 0) {
		int remainder = decimal % base;
		result = intToChar(remainder) + result;
		decimal /= base;
	}

	return result;
}

int main() {

	int B;
	int N; // B: 진수 N: 10진수 숫자
	cin >> N >> B;

	cout << convertToBase(N, B);

	return 0;
}