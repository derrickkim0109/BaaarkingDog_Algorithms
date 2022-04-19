#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	vector<int> house;
	int sum = 0;
	for (int person = 0; person < 9; person++) {
		cin >> house[person];
		sum += house[person];
	}
 
	sort(house.begin(), house.end());

	for (int first = 0; first < 8; first++) {
		for (int next = first + 1; next < 9; next++) {
			if (sum - house[first] - house[next] == 100) {
				for (int result = 0; result < 9; result++) {
					if (result != first && result != next)
						cout << house[result] << '\n';
				}
				return 0;
			}
		}
	}
 
	return 0;
}