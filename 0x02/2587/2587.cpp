#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int inputValue, average;
vector<int> centralValue;

void run() {
    for (int number = 0; number < 5; number ++) {
        cin >> inputValue;
        average += inputValue;
        
        centralValue.push_back(inputValue);
    }
    average = average / 5;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  run();
  sort(centralValue.begin(), centralValue.end());
  cout << average << "\n" << centralValue[2];
}
