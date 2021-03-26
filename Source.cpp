#include <stdio.h>

void main() {

	int a, b;

	printf("첫번째 값을 입력해주세요 >>");
	scanf_s("%d", &a);
	printf("두번째 값을 입력해주세요 >>");
	scanf_s("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d / %d = %d\n", a, b, a / b);
}