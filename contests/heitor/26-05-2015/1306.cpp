#include <cstdio>

int main () {
	int caseNo = 1;
	int r, n;
	int i;
	while (scanf ("%d %d", &r, &n), (r|n)) {
		bool imp = true;
		int cont = 0;
		for (i = 2*n; i < r+n; i+=n) {
			cont++;
			if (cont > 26) {
				imp = false;
				break;
			}

		}
		if (!imp)
			printf ("Case %d: impossible\n", caseNo++);
		else
			printf ("Case %d: %d\n", caseNo++,cont);
	}
	return 0;
} 
