/*
[���丮��]
����)
	0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.

���)
	ù° �ٿ� N!�� ����Ѵ�. */

#include<iostream>

using namespace std;

int main(void) {
	int N, sum = 1;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		sum *= i;
	}

	cout << sum;

	return 0;
}
