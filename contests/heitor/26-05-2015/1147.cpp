#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main () {
	int kn, caseNo =1;
	char kl;
	while (scanf ("%d%c\n", &kn, &kl), kn) {
		int mov = 0;
		int eight = 8;
		map<string,int> board;
		for (int i = 49;i<=56;i++){
			for (int j = 97;j<=104;j++) {
				string s ("");
				s +=(char)i; 
				s +=(char)j;
				board[s] = 0;			
			}
		}
		int pn;
		char pl;
		while (eight--){
			scanf ("%d%c\n", &pn, &pl);
			string s ("");
			s += (char)(pn-1);
			s += pl-1;
			board[s] = 1;
			string q ("");
			q += (char)(pn-1);
			q += pl+1;
			board[q] = 1;
		}

		string m ("");
		int n;
		char l;
		n = (kn+1);
		l = kl-2;
		if (n >= 1 && n <= 8 && ((int)l) >= 97 && ((int)l) <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn+1);
		l = kl+2;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn+2);
		l = kl-1;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn+2);
		l = kl+1;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn-2);
		l = kl+1;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn-2);
		l = kl-1;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn-1);
		l = kl+2;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}
		m.clear();
		n = (kn-1);
		l = kl-2;
		if (n >= 1 && n <= 8 && (int)l >= 97 && (int)l <= 104){
			m += (char)n;
			m += l;
			if (board[m] == 0)
				mov++;
		}

		printf ("Caso de Teste #%d: %d movimento(s).\n",caseNo++, mov);
	}
	return 0;
}