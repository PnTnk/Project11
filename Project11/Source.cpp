#include<stdio.h>
int main() {
	int n;
	printf("Enter number :");
	scanf_s("%d", &n);
	int x = 1;
	while (x <= n) {
		int a = 1;
		while (a <= 2*n) {
			if (x - 1 < a &&a<= 2 * n - x) {
				printf("*");
				a += 1;
			}
			else {
				printf(" ");
				a += 1;
			}
		}
		printf("\n");
		x += 1;
	}
	int y = 1;
	while (y < n) {
		int b = 1;
		while (b <= 2 * n) {
			if (n - y <= b && b <= n + y) {
				printf("*");
				b += 1;
			}
			else {
				printf(" ");
				b += 1;
			}
		}
		y += 1;
		printf("\n");
	}

	return 0;
}