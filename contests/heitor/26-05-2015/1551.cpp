#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main () {
	bool alph[26];
	int n;
	cin>>n;
	getchar();
	while (n--) {
		for (int i = 0;i < 26; i++) alph[i]=false;
		string str;
		getline(cin, str);
		int cont = 0;
		for (string::iterator it = str.begin(); it != str.end(); it++) {
			int i = (int)*it;
			if (i != 32 && i != 44) {
				if (!alph[i-97])
					cont++;
				alph[i-97] = true;
			}
		}		
		if (cont == 26)
			cout<<"frase completa"<<endl;
		else if (cont < 26 && cont >= 13)
			cout<<"frase quase completa"<<endl;
		else
			cout<<"frase mal elaborada"<<endl;
	}
	return 0;
} 
