/*
[�� ��� - 9]
����)
	������ ���� ��Ģ�� ������ �ڿ� ���� ��� ������.

�Է�)
	ù° �ٿ� N(1 �� N �� 100)�� �־�����.

���)
	ù° �ٺ��� 2��N-1��° �ٱ��� ���ʴ�� ���� ����Ѵ�. */

#include<iostream>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < (N - i) * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j < N - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}