#include <iostream>

using namespace std;

int main () {
    cin.tie(0);
    cout.tie(0);

    int totalMoney, dividedMoney;
    cin >> totalMoney >> dividedMoney;

    cout << totalMoney / dividedMoney << "\n" << totalMoney % dividedMoney;
}
