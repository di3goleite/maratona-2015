#include <cstdio>
#include <cstring>
#include <cmath>

int main() {
	int n;
	
	while(scanf("%d", &n) && n) {
		bool doors[n];
		int middle = floor(n/2);

		memset(doors, 1, sizeof(bool)*n);
		
		for(int i=2; i<=n; i++) {
			if(i<=middle) {
				for(int j=1; j<=n; j++) {
					if(j%i == 0)
						doors[j-1] = !doors[j-1];
				}
			} else {
				doors[i-1] = !doors[i-1];
			}
		}
		
		for(int i=0; i<n; i++) {
			if(doors[i] == 1)
				printf("%d ", i+1);
		}

		printf("\n");
	}
	return 0;
}
