#include <stdio.h>

int main() {
	double a;
	int i = 1;
	double k=0;
	printf("�� ���� ������ �Է¹����ðڽ��ϱ�?: ");
	scanf("%lf", &a);
	while (i <= a) {
		double n;
		printf("������ �Է��ϼ���: ");
		scanf("%lf", &n);
		k += n;
		i++;
	}
	printf("����� %lf�Դϴ�", k / a);
}