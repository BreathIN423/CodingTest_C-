/*
[�α� �̵�]

����)
	N��Nũ���� ���� �ְ�, ���� 1��1���� ĭ���� �������� �ִ�.
	������ ������ ���� �ϳ��� �����ϸ�, r�� c���� �ִ� ���󿡴� A[r][c]���� ��� �ִ�.
	������ ���� ���̿��� ���漱�� �����Ѵ�. ��� ����� 1��1 ũ���̱� ������, ��� ���漱�� ���簢�� �����̴�.
	���ú��� �α� �̵��� ���۵Ǵ� ���̴�.
	�α� �̵��� �Ϸ� ���� ������ ���� ����ǰ�, �� �̻� �Ʒ� ����� ���� �α� �̵��� ���� ������ ���ӵȴ�.
	���漱�� �����ϴ� �� ������ �α� ���̰� L�� �̻�, R�� ���϶��, �� ���� �����ϴ� ���漱�� ���� �Ϸ� ���� ����.
	���� ���ǿ� ���� ������ϴ� ���漱�� ��� ���ȴٸ�, �α� �̵��� �����Ѵ�.
	���漱�� �����־� ������ ĭ���� �̿��� �̵��� �� ������, �� ���� ���� �Ϸ� ������ �����̶�� �Ѵ�.
	������ �̷�� �ִ� �� ĭ�� �α����� (������ �α���) / (������ �̷�� �ִ� ĭ�� ����)�� �ȴ�. ���ǻ� �Ҽ����� ������.
	������ ��ü�ϰ�, ��� ���漱�� �ݴ´�.
	�� ������ �α����� �־����� ��, �α� �̵��� ��ĥ ���� �߻��ϴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� N, L, R�� �־�����. (1 �� N �� 50, 1 �� L �� R �� 100)
	��° �ٺ��� N���� �ٿ� �� ������ �α����� �־�����. r�� c���� �־����� ������ A[r][c]�� ���̴�. (0 �� A[r][c] �� 100)
	�α� �̵��� �߻��ϴ� �ϼ��� 2,000�� ���� �۰ų� ���� �Է¸� �־�����.

���)
	�α� �̵��� ��ĥ ���� �߻��ϴ��� ù° �ٿ� ����Ѵ�. */

#include<iostream>
#include<vector>
#include<queue>
#include<cmath>

using namespace std;

int BFS(vector<vector<int>>& A, int& i, int& j, vector<vector<int>>& group,
			int& G_count, int& L, int& R, vector<vector<int>>& same_G_list) {
	int sum = 0;
	queue<vector<int>> q;
	vector<int> pair(2);
	pair[0] = i;
	pair[1] = j;

	q.push(pair);
	group[i][j] = G_count;

	while (!q.empty()) {
		pair = q.front();
		int now_i = pair[0];
		int now_j = pair[1];
		sum += A[now_i][now_j];
		same_G_list[G_count].push_back(now_i);
		same_G_list[G_count].push_back(now_j);
		//printf("pair[0] : %d    pair[1] : %d     G_count : %d\n", pair[0], pair[1], G_count);

		// left
		int next_i = now_i;
		int next_j = now_j - 1;
		if (next_j >= 0 && group[next_i][next_j] == 0 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) >= L 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) <= R) {
			pair[0] = next_i;
			pair[1] = next_j;
			q.push(pair);
			group[next_i][next_j] = G_count;
		}

		//top
		next_i = now_i - 1;
		next_j = now_j;
		if (next_i >= 0 && group[next_i][next_j] == 0 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) >= L 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) <= R) {
			pair[0] = next_i;
			pair[1] = next_j;
			q.push(pair);
			group[next_i][next_j] = G_count;
		}

		//right
		next_i = now_i;
		next_j = now_j + 1;
		if (next_j < A.size() && group[next_i][next_j] == 0 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) >= L 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) <= R) {
			pair[0] = next_i;
			pair[1] = next_j;
			q.push(pair);
			group[next_i][next_j] = G_count;
		}

		//bottom
		next_i = now_i + 1;
		next_j = now_j;
		if (next_i < A.size() && group[next_i][next_j] == 0 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) >= L 
					&& abs(A[now_i][now_j] - A[next_i][next_j]) <= R) {
			pair[0] = next_i;
			pair[1] = next_j;
			q.push(pair);
			group[next_i][next_j] = G_count;
		}

		q.pop();
	}

	return sum;
}

int main(void) {
	int N, L, R, day = -1, G_count;
	cin >> N >> L >> R;
	vector<vector<int>> A(N, vector<int>(N, 0));

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> A[i][j];

	bool flag = true;
	while (flag) {
		flag = false;
		vector<vector<int>> group(N, vector<int>(N, 0)); // �Ҽ� �׷�
		vector<int> groupSum(N * N + 1, 0);
		vector<vector<int>> same_G_list(N * N + 1, vector<int>());
		G_count = 0;

		// ��� ���� �湮�ϸ� BFS �غ�
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (group[i][j] == 0) {	// �Ҽ� �׷��� ���ٸ� BFS ����
					G_count++;
					groupSum[G_count] = BFS(A, i, j, group, 
							G_count, L, R, same_G_list);

					if (groupSum[G_count] > A[i][j])
						flag = true;
						// flag = true�� ���� �� �˻縦 �ٽ� �ؾ���
				}
			}
		}

		// �׷� ��� ó��
		for (int g = 1; g <= G_count; g++)
		{
			int size = same_G_list[g].size();
			int avg = groupSum[g] / (size / 2);

			for (int c = 0; c < size; c+=2)
			{
				A[same_G_list[g][c]][same_G_list[g][c + 1]] = avg;
			}
		}
		day++;
	}
	cout << day;

	return 0;
}