#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0, a, b;
    // �켱���� ť : �ּ���
    priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());

    while (pq.top() < K && pq.size() > 1) {
        a = pq.top();
        pq.pop();
        b = pq.top();
        pq.pop();
        pq.push(a + b * 2);
        answer++;
    }

    if (pq.top() >= K)
        return answer;
    else
        return -1;
}
/* vector�� iterator�� ����� Ǯ�� : ȿ���� ��� ���� */
/*
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    auto iter = scoville.begin();

    while(iter < scoville.end() - 1){
        nth_element(iter, iter+1, scoville.end());
        if(*iter >= K) break;
        *(iter+1) = *iter + 2 * *(iter+1);
        iter++;
        answer++;
    }
    if(*iter >= K)
        return answer;
    else
        return -1;
}
*/