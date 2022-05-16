#include <iostream>
#include <string>
using namespace std;

const int MAX = 1000005;
// dat: i번지 원소의 값
// pre: i번지 원소에 대한 이전 원소의 인덱스
// nxt: 다음 원소의 인덱스
// 특별히 0번지는 연결 리스트의 시작 원소로 고정되어 있다
// 0번지는 값이 들어가지 않고 단지 시작점을 나타내기 위한 dummy node이다. 
int dat [MAX], previousValue[MAX], nextValue[MAX];

// 현재 사용되지 않는 인덱스, 새로운 원소가 들어갈 수 있는 인덱스
// 원소가 추가된 후 1씩 증가될 것
int unused = 1;

void insert(int address, int numberValue){
    dat[unused] = numberValue;
    previousValue[unused] = address;
    nextValue[unused] = nextValue[address];

    if(nextValue[address] != -1) previousValue[nextValue[address]] = unused;
    nextValue[address] = unused;
    unused++;
}

void erase(int address){

}

void traverse() {
    int cur = nextValue[0];
    while(cur != -1) {
        cout << dat[cur] << ' ';
        cur = nextValue[cur];
    }

    cout << "\n\n";
}  

void insert_test(){
  cout << "****** insert_test *****\n";
  insert(0, 10); // 10(address=1)
  traverse();
  insert(0, 30); // 30(address=2) 10
  traverse();
  insert(2, 40); // 30 40(address=3) 10
  traverse();
  insert(1, 20); // 30 40 10 20(address=4)
  traverse();
  insert(4, 70); // 30 40 10 20 70(address=5)
  traverse();
}

void erase_test(){
  cout << "****** erase_test *****\n";
  erase(1); // 30 40 20 70
  traverse();
  erase(2); // 40 20 70
  traverse();
  erase(4); // 40 70
  traverse();
  erase(5); // 40
  traverse();
}

// 연결 리스트 
// STL 아닌 직접 연결 리스트 구현하기
// STL 사용법 알아야함
int main() {
    // 길이가 필요하다면 len 변수를 두고
    // 추가시 +1 
    // 제거 -1

    // pre or nxt 값이 -1 이면 해당 원소의 이전/다음 원소가 존재하지 않음
    fill(previousValue, previousValue+MAX, -1);
    fill(nextValue, nextValue+MAX, -1);
    insert_test();
     erase_test();

}

// struct {
//     struct NODE *prev, *next;
//     int data;
// }