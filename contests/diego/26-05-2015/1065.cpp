#include <stdio.h>

int main() {
	int n=5, result=0, input;

	while(n--) {
		scanf("%d", &input);
		if(input%2 == 0)
			result++;
	}

	printf("%d valores pares\n", result);

	return 0;
}
