#include <stdio.h>
#pragma warnin(disable:4966)

int intpow(int a, int b);

int main(void)
{
	int m, n;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf_s("%d%d", & m, &n);
	printf("�Լ��� ����� %d�Դϴ�.\n", intpow(m, n));

	return 0;
}

int intpow(int a, int b)
{
	int mn = 0;
	mn = a * b;

	return mn;
}