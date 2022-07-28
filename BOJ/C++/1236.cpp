/*
[�� ��Ű��]
����)
	�����̴� ���簢�� ����� ���� ������ �ִ�.
	���� 1���� �� ���� ������ ���ؼ� ��ȣ�ǰ� �ִ�.
	�����̴� ��� ��� ��� ���� �� �� �̻��� ������ ������ ���ڴٰ� �����ߴ�.
	���� ũ��� ������ ����ִ��� �־����� ��, 
	�� ���� ������ �ּҷ� �߰��ؾ� �����̸� ������Ű���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� ���� ���� ũ�� N�� ���� ũ�� M�� �־�����.
	N�� M�� 50���� �۰ų� ���� �ڿ����̴�. 
	��° �ٺ��� N���� �ٿ��� ���� ���°� �־�����.
	���� ���´� .�� ��ĭ, X�� ������ �ִ� ĭ�̴�.

���)
ù° �ٿ� �߰��ؾ� �ϴ� ������ �ּڰ��� ����Ѵ�.*/

#include<iostream>

using namespace std;

int main(void) {
	int N, M, count = 0;
	bool check[51] = {};

	cin >> N >> M;

	char** arr = new char* [N];
	for (int i = 0; i < N; i++) {
		arr[i] = new char[M];
		bool flag = true;
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'X') {
				flag = false;
			}
		}
		if (flag) check[i] = true;
	}


	for (int i = 0; i < M; i++)
	{
		bool flag = true;
		for (int j = 0; j < N; j++)
		{
			if (arr[j][i] == 'X') {
				flag = false;
				break;
			}
		}
		if (flag) {
			for (int k = 0; k < N; k++)
			{
				if (check[k]) {
					check[k] = false;
					arr[k][i] = 'X';
					flag = false;
					count++;
					break;
				}
			}
		}
		if (flag) {
			arr[0][i] = 'X';
			count++;
		}
	}

	for (bool f : check)
		if (f) count++;

	cout << count;

	return 0;
}