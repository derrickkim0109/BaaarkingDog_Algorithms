#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int inputValue;
    cin >> inputValue;
    
    for (int game = 0; game < inputValue; game++) {
        int duplicatedNumber;
        string testCase;
        cin >> duplicatedNumber >> testCase;
        
        for(int charecter = 0; charecter < testCase.length(); charecter++) {
            for(int j = 0; j < duplicatedNumber; j++) {
                cout << testCase[charecter];
            }
        }
        cout << "\n";
    }
}