#include <iostream>

using namespace std;

//배열의 범위를 지정해서 지정 범위만 뒤집을 수 있는 로직을 구현하는게
//이 문제의 핵심.
void RangedArrSwap(int* arr, int startIdx, int endIdx) {
	while (startIdx < endIdx) {
		int temp = arr[startIdx];
		arr[startIdx] = arr[endIdx];
		arr[endIdx] = temp;

		// 시작 인덱스 증가, 끝 인덱스 감소
		startIdx++;
		endIdx--;
	}
}

int main() {

	int n = 0, m = 0;
	int i = 0, j = 0;

	cin >> n >> m;
	
	// n의 크기가 동적으로 변하므로 동적 배열 생성
	int* numArr = new int[n];
	// 동적으로 생성한 배열에 1 ~ n 범위의 숫자 담기
	for (int i = 0; i < n; i++) {
		numArr[i] = i + 1;
	}

	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		RangedArrSwap(numArr, i - 1, j - 1);
	}

	for (int i = 0; i < n; i++) {
		cout << numArr[i] << " ";
	}
	
	return 0;
}