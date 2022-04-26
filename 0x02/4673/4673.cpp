#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;


int sum(int number) {
    int result = number;

    while (number > 0) {
        result = result + number % 10;
        number = number / 10;
    }
    return result;
}

int main(void) {
    ios_base :: sync_with_stdio(0);
    cout.tie(0);

    int number[10001] = {0};
    int temp;

    for(int i = 0; i <= 10000; i++) {
        temp = sum(i);

        if (temp <= 10000) {
            number[temp] = 1;
        }
    }
    for (int j = 0; j <= 10000; j++) {
        if (number[j] != 1) {
            cout << j << "\n";
        }
    }
    return 0;    
}