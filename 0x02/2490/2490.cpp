#include <bits/stdc++.h>
using namespace std;

int result, input;
string res = "DCBAE";

void run() {
  for(int row = 0; row < 3; row++) {
    result = 0;
    for(int column = 0; column < 4; column++) {
      cin >> input;
      result += input;
    }
    cout << res[result] << '\n';
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  run();
}
