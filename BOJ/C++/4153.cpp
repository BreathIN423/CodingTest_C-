/*
[�����ﰢ��]
����)
	���� ����Ʈ�ε��� �� ������ ���̰� 3, 4, 5�� �ﰢ���� ���� �ﰢ���ΰ��� �˾Ƴ´�.
	�־��� ������ ���̷� �ﰢ���� �������� �ƴ��� �����Ͻÿ�.

�Է�)
	�Է��� �������� �׽�Ʈ���̽��� �־����� �������ٿ��� 0 0 0�� �Էµȴ�.
	�� �׽�Ʈ���̽��� ��� 30,000���� ���� ���� ������ �־�����, �� �Է��� ���� ���̸� �ǹ��Ѵ�.

���)
	�� �Է¿� ���� ���� �ﰢ���� �´ٸ� "right", �ƴ϶�� "wrong"�� ����Ѵ�. */

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void) {
	vector<int> num(3);

	while (true) {
		cin >> num[0] >> num[1] >> num[2];
		if (num[0] == 0 && num[1] == 0 && num[2] == 0) break;

		sort(num.begin(), num.end());

		if (num[0] * num[0] + num[1] * num[1] == num[2] * num[2]) cout << "right" << endl;
		else cout << "wrong" << endl;
	}


	return 0;
}
