#include <stdio.h>

void main() {

	int a, b;

	printf("ù��° ���� �Է����ּ��� >>");
	scanf_s("%d", &a);
	printf("�ι�° ���� �Է����ּ��� >>");
	scanf_s("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d / %d = %d\n", a, b, a / b);
}