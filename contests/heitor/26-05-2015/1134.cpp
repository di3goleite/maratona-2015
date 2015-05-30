#include <cstdio>

int main () {
	int n;
	int gas = 0, alc = 0,die = 0;
	while (true) {
		scanf ("%d", &n);
		if (n == 4)
			break;
		switch (n){
			case 1: alc++; break;
			case 2: gas++; break;
			case 3: die++; break;
		}
	}
	printf ("MUITO OBRIGADO\n");
	printf ("Alcool: %d\n", alc);
	printf ("Gasolina: %d\n", gas);
	printf ("Diesel: %d\n", die);
	return 0;
}