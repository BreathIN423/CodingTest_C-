/*
[�ֳʱ׷�]
����)
	�� �ܾ� A�� B�� �־����� ��, A�� ���ϴ� ���ĺ��� ������ �ٲپ B�� ���� �� �ִٸ�, A�� B�� �ֳʱ׷��̶�� �Ѵ�.
	�� �ܾ �ֳʱ׷����� �ƴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� �׽�Ʈ ���̽��� ����(<100)�� �־�����.
	�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 100�� ���� �ʴ� �ܾ �������� ���еǾ �־�����.
	�ܾ�� ���ĺ� �ҹ��ڷθ� �̷���� �ִ�.

���)
	�� �׽�Ʈ ���̽����� �ֳʱ׷����� �ƴ����� ��ü ��°� ���� �������� ����Ѵ�.

��� ����)
	��Ȯ�� ��� ������ ���⿡�� �� Java�� �����ϸ� Ȯ���� �� �ִ�. */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void) {
	int N;
	string A,B;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		string ta = A, tb = B;
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		cout << A << " " << B << endl;

		if (A == B)
			cout << ta << " & " << tb << " are anagrams." << endl;
		else
			cout << ta << " & " << tb << " are NOT anagrams." << endl;
	}
	return 0;
}