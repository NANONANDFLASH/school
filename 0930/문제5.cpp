#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
	int answer, cnt, guess;
	srand(time(NULL));
	answer = rand()%10+1;
	
	do{
		printf("1부터 100까지 숫자를 맞춰보세요>> ");
		scanf("%d", &guess);
		cnt++;
		
		if(guess>answer)
			printf("제시한 숫자가 높습니다.\n");
		else if(guess<answer)
			printf("제시한 숫자가 낮습니다.\n");
	}while(guess!=answer);
	
	printf("축하합니다! 정답은 %d이고, 시도횟수=%d\n", answer, cnt);
}
