#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int inputCount;

int main(void) {
    ios_base :: sync_with_stdio(false);
    cout.tie(NULL);

    cin >> inputCount;
    for(int i = 0; i < inputCount; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*" << "";            
        }
        cout << "\n";
    }
}