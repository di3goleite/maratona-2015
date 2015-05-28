#include <stdio.h>

int main() {
	int count=0;
	float result=0;
	float M[12][12];
	char O;
	
	scanf("%c", &O);
	
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			scanf("%f", &M[i][j]);
		}
	}
	
	for(int i=0; i<12; i++){
		for(int j=0; j<12; j++){
			printf("%.1f ", M[i][j]);
		}
		printf("\n");
	}
	
	if(O == 'S') {
		for(int i=0; i<11; i++){
			for(int j=i+1; j<12; j++) {
				result = result + M[i][j];
			}
		}
	} else {
		for(int i=0; i<11; i++){
			for(int j=i+1; j<12; j++) {
				result = result + M[i][j];
				count++;
			}
		}
		
		result = result/count;
	}

	printf("%.1f\n", result);

	return 0;
}
