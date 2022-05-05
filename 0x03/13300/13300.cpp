#include <bits/stdc++.h>
using namespace std;

int students[2][7] = {};
int requiredRoom,totalStudent, maxCapacity = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> totalStudent >> maxCapacity;

    for (int i = 0; i < totalStudent; i++) {
        int gender, grade;
        cin >> gender >> grade;
        students[gender][grade]++;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < 7; j++) {
            requiredRoom += students[i][j] / maxCapacity;

            if (students[i][j] % maxCapacity) ++requiredRoom;
        }
    }
    cout << requiredRoom;
}