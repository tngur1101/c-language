#include <stdio.h>

int main() {
	int a;
	int i = 0;
	int k=0;

	while (i < 5) {
		while(k < i) {
			printf("o");
			k++;
		}
		printf("*\n");
		i++;
		k = 0;
	}
}