#include <bits/stdc++.h>


using namespace std;
using lecture = pair<int, int>;

priority_queue<lecture, vector<lecture>, greater<lecture>> pq;

int main() {
    int lectureCount;
    cin >> lectureCount;
    
    vector<lecture> lectures(lectureCount);

    for (int i = 1; i <= lectureCount; i++) {
        int lectureIndex, startTime, endTime;
        
        cin >> lectureIndex >> startTime >> endTime;
        lectures[i].first = startTime;
        lectures[i].second = endTime;
    } 
    
    sort(lectures.begin(), lectures.end());
    
    int count = 0;
    
    for (int i = 0; i < lectureCount; i++) {
        if (pq.size() > 0) {
            if (pq.top().first > lectures[i].first) count++;
            else pq.pop();
        } 
        else count++;
        
        lecture add_lecture;
        add_lecture.first = lectures[i].second;
        add_lecture.second = lectures[i].first;
        pq.push(add_lecture);
    }
    
    cout << count;
    
    return 0;
}