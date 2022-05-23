#include <iostream>
#define MAX 100

using namespace std;

int main()
{
    int gameCount, target, goal, sum = 0; 
    int min = 999999;

    cin >> gameCount >> target;
    
    int game[MAX] = {0, };
    
    for (int i = 0; i < gameCount; i ++) 
        cin >> game[i];
    
    for(int i = 0; i < gameCount - 2; i++) 
        for (int j = i+1; j < gameCount - 1; j++) 
            for (int k = j + 1; k < gameCount; k++) {
                sum = game[i] + game[j] + game[k];
                
                if(target - sum < min && target - sum >= 0) {
                    min = target - sum;
                    goal = sum;
                }
            }
            
    cout << goal;
    return 0;
}
