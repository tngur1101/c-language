#include <stdio.h>

int main() {
	int a;
	int i = 0;
	int n=0;
	

	while (i < 5) {
		printf("1이상의 원하는 정수를 입력하세요: ");	
		scanf("%d", &a);
	
		if (a < 1) {
		printf("정수가 1보다 작습니다\n");
		printf("다른 1이상의 정수를 입력하세요: ");
		scanf("%d", &a);
		}

		n += a;
		i++;
	}
	printf("%d", n);
}