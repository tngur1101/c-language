#include <stdio.h>

int main() {
	int a;
	int i;
	printf("���ϴ� �������� ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	while (i <= a) {
		printf("%d * %d = %d\n", a, a - i, a*(a - i));
		i++;
	}
}