#include <cstdio>
#include <cstring>

int main() {
	int n, i, count;
	char line[1000], letter;
	bool alphabet[26];

	scanf("%d ", &n);

	while(n--) {
		i=0;
		count=0;

		// clear line
		for(int k=0; k<1000; k++) {
			line[k] = '\0';
		}
		
		// clear alphabet
		memset(alphabet, 0, sizeof(bool)*26);
		
		fgets (line, 1000, stdin);
		
		letter = line[i];
		
		while(letter != '\0') {
			if(letter != ' ' && letter != ',')
				alphabet[((int) letter)-97] = 1;
			i++;
			letter = line[i];
		}
		
		for(int j=0; j<26; j++) {
			if(alphabet[j] == 1)
				count++;
		}
		
		if(count == 26)
			printf("frase completa\n");
		else if(count >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");
	}

	return 0;
}
