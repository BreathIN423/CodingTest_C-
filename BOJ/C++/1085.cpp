/*
[���簢������ Ż��]
����
�Ѽ��� ����(x, y)�� �ִ�.���簢���� �� ���� ��ǥ�࿡ �����ϰ�,
���� �Ʒ� ��������(0, 0), ������ �� ��������(w, h)�� �ִ�.
���簢���� ��輱���� ���� �Ÿ��� �ּڰ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� x, y, w, h�� �־�����.

���
ù° �ٿ� ������ ������ ����Ѵ�.

����
1 �� w, h �� 1, 000
1 �� x �� w - 1
1 �� y �� h - 1
x, y, w, h�� ����*/

#include<iostream>

using namespace std;

int main(void) {
	int x, y, w, h, answer;
	std::cin >> x >> y >> w >> h;

	answer = x < y ? x : y;
	answer = answer < w - x ? answer : w - x;
	answer = answer < h - y ? answer : h - y;

	cout << answer;

	return 0;
}