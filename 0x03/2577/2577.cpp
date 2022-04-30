#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int numbers[3];
    for(int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }
    int first = numbers[0];
    int second = numbers[1];
    int third = numbers[2];

    int total = first * second * third; 
    
    int result[10] = {};

    while(total > 0) {
        result[total%10]++;
        total /= 10;
    }
    
    for (int index = 0; index < 10; index++) cout << result[index] << '\n';
}