#include <cstdio>

int main () {
	int N;
	while (scanf ("%d", &N), N) {
		if (N <= 3)
			printf ("1\n");
		else {
			bool first = true;
			int l = 1;
			for (int k = 1; k<=N; k+=l){
				if (first){
					printf ("%d",k);
					first = false;
				}
				else
					printf (" %d",k);
				l+=2;
				}
				printf ("\n");
		}
	}
	return 0;
} 
