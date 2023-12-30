#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int statureArr[9];
    int statureArrSum = 0;
    for (int k = 0; k < 9; k++) {
        cin >> statureArr[k];
        statureArrSum += statureArr[k];
    }

    int i, j;
    for (i = 0; i < 8; i++) {
        bool found = false;
        for (j = i + 1; j < 9; j++) {
            if (statureArrSum - (statureArr[i] + statureArr[j]) == 100) {
                found = true;
                break;
            }
        }
        if (found) { break; }
    }

    int idx = 0;
    int ResultArr[7];
    for (int k = 0; k < 9; k++) {
        if(k != i && k != j) {
            ResultArr[idx] = statureArr[k];
            idx++;
        }
    }
    sort(ResultArr, ResultArr + 7);
    for (int k = 0; k < 7; k++) {
        cout << ResultArr[k] << endl;
    }
    
    return 0;
}