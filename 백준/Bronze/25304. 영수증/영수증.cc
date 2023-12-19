#include <iostream>

using namespace std;

int main() {

	int x = 0, n = 0, a = 0, b = 0;
	int sum = 0; // 모두 더한 금액
	cin >> x; // 영수증에 적힌 총 금액
	cin >> n; // 영수증에 적힌 물건 총 종류의 수 
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b; // a, b : 각 물건의 가격, 개수
		sum += a * b;
	}

	if (x == sum) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}

	return 0;
}