#include <stdio.h>

int main(){
	char mark[5][5]={'\0'};
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i==j) mark[i][j]='X';
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%c", mark[i][j]);
		}
		printf("\n");
	}
}

