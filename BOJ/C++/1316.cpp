/*
[�׷� �ܾ� üĿ]

����)
	�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�. 
	���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����,
	kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������,
	aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.

	�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�.
	��° �ٺ��� N���� �ٿ� �ܾ ���´�.
	�ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

���)
	ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.*/

#include<iostream>

using namespace std;

int main(void) {
	int N, count;
	cin >> N;

	count = N;
	for (int i = 0; i < N; i++) {
		char str[101] = {}, ch[24] = {};
		int index = 0;

		cin >> str;
		
		for (char c : str) {
			if (c == '\0') break;
			if (c != ch[index]) {
				
				bool isin = false;
				for (char h : ch) {
					if (h == c) isin = true;
				}

				if (isin) {
					count--;
					break;
				}
				else {
					ch[++index] = c;
				}

			}
		}
	}

	cout << count;

	return 0;
}