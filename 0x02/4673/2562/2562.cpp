#include <bits/stdc++.h>
using namespace std;

int inputValue, maxValue, maxIndex;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  for(int i = 1; i < 10; i++){
    cin >> inputValue;
    
    if(maxValue < inputValue){
      maxValue = inputValue;
      maxIndex = i;
    }
  }
  cout << maxValue << "\n" << maxIndex;
}