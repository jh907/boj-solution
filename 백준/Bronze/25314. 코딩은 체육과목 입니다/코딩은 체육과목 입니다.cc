#include <iostream>

#define STR "long"

using namespace std;

int main() {

	int n = 0;
	cin >> n;

	int longNum = n / 4;

	for (int i = 0; i < longNum; i++) {
		cout << STR << " ";
	}

	cout << "int";

	return 0;
}