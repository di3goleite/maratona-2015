#include <cstdio>
#include <stack>
#include <queue>
using namespace std;
int main () {
	int n;
	while (scanf ("%d ", &n), n) {
		queue<char> trainIn;
		stack<char> station;
		int a = n;
		while (a--) {
			char b;
			scanf ("%c ",&b);
			trainIn.push(b);
		}
		a = n;
		bool fim = false;
		while (a--) {
			char c;
			scanf ("%c ",&c); 
			int i;
			bool entra = true;
			if (!fim)
			if (!station.empty()){
				if (station.top() == c){
					station.pop();
					printf ("R");
					entra = false;
				}
				else if (trainIn.empty())
					fim = true;
			}
			if (!fim && entra)
			for (i = 0; i < n; i ++){	
				if (!trainIn.empty()){
					station.push(trainIn.front());
					trainIn.pop();
					printf ("I");
				}		
				if (station.top() == c){
					station.pop();
					printf ("R");
					break;
				}
			}
			if (i == n)
				fim = true;
		}
		if (!station.empty())
			printf (" Impossible\n");
		else
			printf ("\n");
	}
	return 0;
}