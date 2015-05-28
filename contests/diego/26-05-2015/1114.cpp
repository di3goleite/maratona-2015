#include <stdio.h>

#define PASSWD 2002

int main() {
	int in;

	while(true) {
		scanf("%d", &in);
		
		if(in == PASSWD) {
			printf("Acesso Permitido\n");
			break;
		} else {
			printf("Senha Invalida\n");
		}
	}
}
