#include <stdio.h>

int main()
{
	int x, y;
	char c;

	printf("�ΰ��� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);

	printf("�����ڸ� �Է��Ͻÿ�:");
	scanf("%c", &c);

	if (c == '*')
		printf("%d*%d=%d", x, y, x*y);

	return 0;
}