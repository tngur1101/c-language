#include <stdio.h>

int main() {
	double a;
	int i = 1;
	double k=0;
	printf("몇 개의 정수를 입력받으시겠습니까?: ");
	scanf("%lf", &a);
	while (i <= a) {
		double n;
		printf("정수를 입력하세요: ");
		scanf("%lf", &n);
		k += n;
		i++;
	}
	printf("평균은 %lf입니다", k / a);
}