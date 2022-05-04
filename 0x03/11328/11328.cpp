#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int caseCount;
    int alphabet[26] = {};
    string firstString, secondString;

    cin >> caseCount;

    while (caseCount--)
    {
        cin >> firstString >> secondString;

        for (auto word: firstString) alphabet[word - 'a']++;
        for (auto word: secondString) alphabet[word - 'a']--;

        bool isPossible = true;

        for (int testCase : alphabet) {
            if (testCase != 0) isPossible = false;
        }

        if(isPossible) cout << "Possible" << "\n";
        else cout << "Impossible" << "\n";
    }
}