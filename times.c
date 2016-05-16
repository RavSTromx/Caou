#include <stdio.h>

int main()
{
	int x, y;
	char c;

	printf("두개의 정수를 입력하시오:");
	scanf("%d %d", &x, &y);

	printf("연산자를 입력하시오:");
	scanf("%c", &c);

	if (c == '*')
		printf("%d*%d=%d", x, y, x*y);

	return 0;
}