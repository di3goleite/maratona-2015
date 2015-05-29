#include <stdio.h>

int main() {
	float M[12][12], result=0;
	int count=0;
	char in;
	
	scanf("%c", &in);
	
	for(int j=0; j<12; j++) {
		for(int i=0; i<12; i++) {
			scanf("%f", &M[i][j]);
		}
	}
	
	// Make sum
	if(in == 'S') {
		for(int j=1; j<=11; j++) {
			for(int i=0; i<j; i++) {
				result = result + M[i][j];
			}
		}
	} else {
		for(int j=1; j<=11; j++) {
			for(int i=0; i<j; i++) {
				result = result + M[i][j];
				count++;
			}
		}
		result = result/count;
	}
	
	printf("%.1f\n", result);
	return 0;
}
