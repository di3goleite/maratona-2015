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
		int mat[N][M], temp = N>M?N:M;
		long int total = 0L;
		int cont[temp];
		for (int i = 0; i < temp; i++) cont[i] = 0;
		if (K > N && K > M)
			printf ("0\n");
		else {
			for (int i = 0; i < N; i++) {
				contCol= 0;
				for (int j = 0; j<M; j++) {
					int m = i*M+j;
					if (isPrimo(m))
						mat[i][j] = -1;
					else{
						contCol++;
						mat[i][j] = m;
					}
					contRow=0;
					if(K>1 && i == 0){
						for (int k =0; k < N; k++){
							if (!isPrimo(k*M+j))
								contRow++;
						}
						cont[contRow-1] +=1;
					}
					
				}
				cont[contCol-1] +=1;
			}
			for (int i = K; i <= temp;i++) {
				if (i == K) {
					total += cont[i-1];
				}
				else if (cont[i-1] > 0)
					total += cont[i-1]*comb(i,K);
			}
			printf ("%ld\n",total);
		}

	}
	return 0;	
}