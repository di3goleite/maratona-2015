#include <cstdio>

int main () {
	int n, res = 0; 
	int five = 5;
	while (five--) {
		scanf ("%d", &n);
		if (n%2==0)
			res++;
	}
	printf ("%d valores pares\n", res);
	return 0;
}