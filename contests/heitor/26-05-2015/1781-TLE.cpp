#include <cstdio>
#include <string>
#include <iostream>

using namespace std;
int main () {
	int t, caseNo = 1;
	scanf ("%d\n", &t);
	while (t--) {
		string S;
		getline(cin,S);
		int Q;
		scanf ("%d",&Q);
		string res (S);
		cout<<"Caso #"<<caseNo<<":"<<endl;
		while (Q--) {
			int op;
			int pos;
			scanf ("%d ", &op);
			switch (op) {
				case 0:
					scanf ("%d", &pos);
					for (int i = 0; i < S.size() ;i++) {
						if ( S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u') {
							int k = pos;
							for (int j = (i+1)%S.size(); k > 0; j=((j+1)%S.size())){				
								if ( S[j] == 'a' || S[j] == 'e' || S[j] == 'i' || S[j] == 'o' || S[j] == 'u'){
									k--;
								}
								if (k == 0){
									res[j] = S[i];
								}
							}	
						}
					}
				S = res;
				 break;
				case 1:
					scanf ("%d", &pos);
					for (int i = 0; i < S.size() ;i++) {
						if ( S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u') {
							int k = pos;
							for (int j = (i+1)%S.size(); k > 0; j= ((j+1)%S.size()) ){								
								if ( S[j] != 'a' && S[j] != 'e' && S[j] != 'i' && S[j] != 'o' && S[j] != 'u'){
									k--;
								}
								if (k == 0){
									res[j] = S[i];
								}
							}	
						}
					}
				S = res;
				 break;
				case 2: cout<<res<<endl; break;
			}
		}
		caseNo++;
	}
	return 0;
}  
