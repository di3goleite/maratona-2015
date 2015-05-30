#include <cstdio>
using namespace std;
bool isPrimo (int val) {
	bool primo = true;
	if (val == 2 )
		return true;
	if (val == 0 || val == 1 || val%2 == 0)
		return false;
	for (int i = 2; i < val; i++){
		if (val%i==0)
			primo = false;
	}
	return primo;
}

long int comb (int m, int p) {
	int mp = m-p;
	long int fp = 1;
	long int res = 1;
	for (int i = m; i > mp; i--)
		res = res*i;
	for (int j = p; j>1;j--)
		fp = fp*j;
	return (res/fp);
}

int main () {
	int N, M, K;
	int contCol = 0, contRow = 0;
	while (scanf ("%d %d %d", &N, &M, &K), (N|M|K)){
		int mat[N*M];
		long int total = 0L;
		if (K > N && K > M)
			printf ("0\n");
		else {
			int cont1 = 1;
			int cont2 = 0;
			for (int i = 0; i < N*M; i++){
				if (i == (M*cont1-1)){
					if (contCol == K)
						total+=1;
					else if (contCol > K)
						total+= comb(contCol,K);
					contCol = 0;
					cont1 += 1;
				}
				if (i== ())
				if (!isPrimo(i)){
					contCol++;
					contRow++;
				}
			}
			printf ("%ld\n",total);
		}

	}
	return 0;	
}