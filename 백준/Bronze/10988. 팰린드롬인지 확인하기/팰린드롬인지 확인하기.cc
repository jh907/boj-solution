#include <iostream>

using namespace std;

int main() {
	
	/*string str;
	int result = 0;
	cin >> str;
	
	int startIdx = 0, endIdx = str.length() - 1;
	string reversedStr = str;

	while (startIdx < endIdx) {
		int temp = reversedStr[startIdx];
		reversedStr[startIdx] = reversedStr[endIdx];
		reversedStr[endIdx] = temp;
		
		startIdx++;
		endIdx--;
	}

	result = (reversedStr == str) ? 1 : 0;

	cout << result;*/

	// 더 최적화 한 코드
	string str;
	int result = 1; // 초기값을 1로 설정

	cin >> str;

	int startIdx = 0, endIdx = str.length() - 1;

	/*문자를 복사해서 뒤집어서 비교할 
	필요 없이 대칭되는 부분 글자 비교*/
	while (startIdx < endIdx) {
		if (str[startIdx] != str[endIdx]) {
			result = 0;
			break;
		}
		startIdx++;
		endIdx--;
	}

	cout << result;


	return 0;
}