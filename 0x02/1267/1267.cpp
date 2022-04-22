#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int callingTimes;
int times[10000];
int youngCallingPlan, minCallingPlan;

int main(void) {
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> callingTimes;
    
    for (int time = 0; time < callingTimes; time++) {
        cin >> times[time];
    }

    for (int i = 0; i < callingTimes; i++) {
        youngCallingPlan += 10 * ((times[i] / 30) + 1);;
        minCallingPlan += 15 * ((times[i] / 60) + 1);;
    }
    
    if (minCallingPlan == youngCallingPlan) cout << "Y M " << youngCallingPlan;
    else if (minCallingPlan < youngCallingPlan) cout << "M " << minCallingPlan;
    else cout << "Y " << youngCallingPlan;
}