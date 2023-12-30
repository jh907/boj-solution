#include <iostream>
#include <vector>

using namespace std;

// swap함수
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 선택 정렬 함수
void selection_sort(vector<int> &arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        // 최소 인덱스를 정함
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            // 최소 인덱스 다음 인덱스부터 차례로 순회하며
            // 더 작은 값을 발견하면 해당 인덱스가 최소값을 가진 인덱스
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // 최소값이 자기 자신의 위치에 있지 않을 때 자리를 바꿈
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    
    int n;
    cin >> n;
    vector<int> arr(n);    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection_sort(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}