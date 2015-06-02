#include <stdio.h>

int n, i=1;

int main() {
	scanf("%d", &n);

	for(; n--; i=i+4) {
		printf("%d %d %d PUM\n", i, i+1, i+2);
	}
	return 0;
}
