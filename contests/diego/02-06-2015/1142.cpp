#include <cstdio>

int n, i=0;

int main() {
	scanf("%d", &n);

	while(n--) {
		printf("%d ", ++i);
		printf("%d ", ++i);
		printf("%d ", ++i);
		printf("PUM\n");
		i++;
	}
	return 0;
}
