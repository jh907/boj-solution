#include <iostream>
#include <vector>

using namespace std;

int main() {

	int testNum;
	int count = 0;
	int rows = 100;
	int cols = 100;
	
	// 2차원 배열을 vector로 지정
	vector<vector<int>> arr(rows, vector<int>(cols, 0));

	cin >> testNum;
	for (int i = 0; i < testNum; i++) {
		int x, y;
		cin >> x >> y;
		for (int row = x; row < x + 10; row++) {
			for (int col = y; col < y + 10; col++) {
				// 0일때 1로 바꾸고 카운트 증가
				if (!arr[row][col]) {
					count++;
					arr[row][col] = 1;
				}
			}
		}
	}

	cout << count;

	return 0;
}