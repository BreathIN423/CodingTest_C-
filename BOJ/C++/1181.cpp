/*
[�ܾ� ����]
����)
	���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		1. ���̰� ª�� �ͺ���
		2. ���̰� ������ ���� ������
�Է�)
	ù° �ٿ� �ܾ��� ���� N�� �־�����. (1 �� N �� 20,000) ��° �ٺ��� N���� �ٿ� ���� ���ĺ� �ҹ��ڷ� �̷���� �ܾ �� �ٿ� �ϳ��� �־�����.
	�־����� ���ڿ��� ���̴� 50�� ���� �ʴ´�.

���)
	���ǿ� ���� �����Ͽ� �ܾ���� ����Ѵ�. ��, ���� �ܾ ���� �� �Էµ� ��쿡�� �� ������ ����Ѵ�. */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(std::string& a, std::string& b) {
	if (a.size() < b.size())
		return true;
	else if (a.size() == b.size()) 
	{
		if (a.compare(b) >= 0) 
			return false;
		return true;
	}
	return false;
}

int main(void) {
	int N;

	cin >> N;

	vector<string> str(N);

	for (int i = 0; i < N; i++)
		cin >> str[i];

	sort(str.begin(), str.end(), check);

	string temp = str[0];
	cout << temp << endl;

	for (int i = 1; i < N; i++)
	{
		if (temp != str[i]) {
			cout << str[i] << endl;
			temp = str[i];
		}
	}
	return 0;
}