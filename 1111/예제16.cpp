#include <stdio.h>

int main(){
	int a[2][3]={{100, 90, 80}, {70, 50, 60}};
	int i, j;
	
	for(j=0; i<2; i++){
		for(j=0; j<3; j++){
		printf("%4d ", a[i][j]);
		}	
		printf("\n");
	}
} 
