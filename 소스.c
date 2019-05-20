#include <stdio.h>

int main() {
	int a;
	int i;
	printf("원하는 구구단의 숫자를 입력하시오: ");
	scanf("%d", &a);
	while (i <= a) {
		printf("%d * %d = %d\n", a, a - i, a*(a - i));
		i++;
	}
}