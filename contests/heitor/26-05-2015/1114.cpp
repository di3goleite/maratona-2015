#include <cstdio> 

int main () {
	int pass;
	while (true) {
		scanf ("%d",&pass);
		if (pass == 2002) {
			printf ("Acesso Permitido\n");
			return 0;
		}
		else
			printf ("Senha Invalida\n");
	}
	return 0;
}
