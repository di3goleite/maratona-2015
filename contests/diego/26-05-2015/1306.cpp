#include <stdio.h>

int main() {
	int r, n, d, count=1;
	
	while(scanf("%d %d", &r, &n) && r|n) {
		if(n >= r) {
			printf("Case %d: 0\n", count);
		} else {
			for(int i=1; ; i++) {
				if(i == 27) {
					printf("Case %d: impossible\n", count);
					break;
				} else if( (n*i)+n >= r ) {
					printf("Case %d: %d\n", count, i);
					break;
				}
			}
		}
		
		count++;
	}
	
	return 0;
}
