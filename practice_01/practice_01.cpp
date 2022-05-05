#include <bits/stdc++.h>
using namespace std;
// 주어진 길이 N의 int 배열 arr에서 합이 100인 
// 서로 다른 위치의 두원소가 존재하면 1을, 
// 존재하지 않으면 0을 반환하는 함수 func2(int arr[], intN)을
// 작성하라.
// arr의 각 수는 0 이상 100이하이고 N은 1000이하이다.

int numbers[101];

void func2(int arr[], int N) {
    // O(N2)
    for (int i=0; i < N; i++) {
        int k = 1;
        for (; k < N; k++) 
            if (arr[i] + arr[k] == 100) cout << "1";
    }
}

int func3(int arr[], int N) {
    int occur[101] = {};
    for (int i = 0; i < N; i++) {
    if(occur[100 - arr[i]] == 1)
        return 1;
        
        occur[arr[i]] = 1;        
    }
    return 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int inputValue;

    cin >> inputValue;
    func2(numbers, inputValue);
}
 
 