#include <stdio.h>

int main() {
	int a;
	int i = 0;
	int n=0;
	

	while (i < 5) {
		printf("1�̻��� ���ϴ� ������ �Է��ϼ���: ");	
		scanf("%d", &a);
	
		if (a < 1) {
		printf("������ 1���� �۽��ϴ�\n");
		printf("�ٸ� 1�̻��� ������ �Է��ϼ���: ");
		scanf("%d", &a);
		}

		n += a;
		i++;
	}
	printf("%d", n);
}