#include <stdio.h>

int main() {
	int n=0;
	int res[3];

	res[0] = 0;
	res[1] = 0;
	res[2] = 0;
	
	scanf("%d", &n);

	while(n != 4) {
		if(n == 1) {
			res[0]++;
			scanf("%d", &n);
		} else if(n==2) {
			res[1]++;
			scanf("%d", &n);
		} else if(n==3) {
			res[2]++;
			scanf("%d", &n);
		} else {
			scanf("%d", &n);
		}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", res[0]);
	printf("Gasolina: %d\n", res[1]);
	printf("Diesel: %d\n", res[2]);
	
	return 0;
}
