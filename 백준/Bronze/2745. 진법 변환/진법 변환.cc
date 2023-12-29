#include <iostream>
#include <typeinfo>
#include <string>
#include <cmath>

using namespace std;

// 숫자인지 문자인지 확인하기 위한 함수
bool isDigit(char c) {
	return (c >= '0' && c <= '9');
}

int main() {
	
	int B;
	string N; // B: 진수 N: B진수 숫자
	cin >> N >> B;
	int res = 0;

	// ASCII 코드 값 차이를 이용하여 계산
	for (int i = N.length() - 1; i >= 0; i--) {
		if (isDigit(N[i])) {
			res += (N[i] - '0') * pow(B, N.length() - i - 1) ;
		}
		else {
			res += (N[i] - 'A' + 10) * pow(B, N.length() - i - 1);
		}
	}

	cout << res;

	return 0;
}