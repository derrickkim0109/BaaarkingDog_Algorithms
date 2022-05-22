#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int N, M;
    queue<int> q;
 
    cin >> N >> M;
 
    //initial queue
    for (int i = 1; i <= N; i++)
        q.push(i);
 
    //operation and print
    cout << "<";
    while (q.size()) {
        if (q.size() == 1) //the last one
        {
            cout << q.front() << ">";
            q.pop();
            break;
        }
        for (int i = 1; i < M; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    return 0;
}

// 한 명을 넘길 때마다 q.pop(), q.push()를 하면 된다?
// 차례가 되서 죽일 때는 그냥 q.pop() 해버리면 된다
// 큐가 빌 때까지 반복하면서 출력하면 조세푸스 순열이 완성
// 처음과 끝에 < >를 붙여야 하므로, 큐를 다 비우지 말고, 하나를 남겨 둔 상태에서 
// 반복문을 종료한 후(그래야 , 가 들어가지 않음) 마지막을 출력해주면 된다.
// 1 2 3 4 5 6 7
// 