#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int a, b; // a: 입력할 개수, b : 비교할 숫자.
int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a >> b; 
    int answer = a + b;

    cout << answer << ' '; 
}