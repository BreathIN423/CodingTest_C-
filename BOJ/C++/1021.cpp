#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	int N, M, answer = 0;
	cin >> N >> M;

	vector<int> que(N);	//ť�� ����� vector

	for (int i = 0; i < N; i++)	//ť�� 1~N �� �־��ֱ�
		que[i] = i + 1;

	int size = N, pick, idx, temp;	//���� ť�� ũ��, ã�� ��, ã�� ���� �ε���, �ӽ� ����

	for (int i = 0; i < M; i++) {
		cin >> pick;	//ã�� ��
		idx = find(que.begin(), que.end(), pick) - que.begin();	//ã�� ���� �ε���
		
		while (que.front() != pick) { //ã�� ���� ���ö����� �ݺ�
			if (idx <= size / 2) {		//ť�� �������� �б�
				temp = que.front();
				que.erase(que.begin());
				que.push_back(temp);
			}
			else {						//ť�� ���������� �б�
				temp = que.back();
				que.erase(que.end()-1);
				que.insert(que.begin(), temp);
			}
			answer++;
		}
		que.erase(que.begin());
		size--;
	}
	cout << answer;
	return 0;
}