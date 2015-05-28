#include <cstdio>

int main() {
	int n, temp;
	
	while(scanf("%d", &n) && n) {
		
		for(int i=1; ; i++) {
			temp = i*i;

			if(temp <= n) {
				if((i+1)*(i+1) <= n)
					printf("%d ", temp);
				else
					printf("%d", temp);
			} else {
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
