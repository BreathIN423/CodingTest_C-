/*
[�� ��� - 5]
����)
	ù° �ٿ��� �� 1��, ��° �ٿ��� �� 3��, ..., N��° �ٿ��� �� 2��N-1���� ��� ����
	���� ����� �������� ��Ī�̾�� �Ѵ�.

�Է�)
	ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���)
	ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�. */

#include<iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < N-i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i*2-1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}