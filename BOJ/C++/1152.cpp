/*
[�ܾ��� ����]

����)
	���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����.
	�� ���ڿ����� �� ���� �ܾ ������ ? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.

�Է�)
	ù �ٿ� ���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����.
	�� ���ڿ��� ���̴� 1, 000, 000�� ���� �ʴ´�.�ܾ�� ���� �� ���� ���еǸ�, ������ �����ؼ� ������ ���� ����.
	���� ���ڿ��� �������� �����ϰų� ���� �� �ִ�.

���)
	ù° �ٿ� �ܾ��� ������ ����Ѵ�.*/

#include<iostream>
#include<string>

using namespace std;

int main(void) {

	string input;
	int count = 0;

	getline(cin, input);

	if (input.empty()) {
		cout << 0;
		return 0;
	}
	count = 1;
	for (int i = 0; i < (int)input.length(); i++)
	{
		if (input[i] == ' ') count++;
	}

	if (input[0] == ' ') count--;
	if (input[input.length() - 1] == ' ') count--;

	cout << count;

	return 0;
}