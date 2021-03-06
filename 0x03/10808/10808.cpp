#include <bits/stdc++.h>
using namespace std;

void example(string inputValueString) {
    for (char alphabet = 'a'; alphabet <= 'z'; alphabet++) {
        int countAmount = 0;
        for(char value : inputValueString)
            if (alphabet == value) countAmount++;

        cout << countAmount << ' ';
    }
}


int alphabet[26];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string inputValue;

    cin >> inputValue;
    
    for (char element : inputValue) alphabet[element-'a']++;

    for (int sequence = 0; sequence < 26; sequence++) cout << alphabet[sequence] << ' '; 
}
 