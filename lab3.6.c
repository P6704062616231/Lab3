#include <stdio.h>
int main(){
	int score;
	scanf("%d",&score);
	if (score < 68){
		if(score >= 55 ){
			printf("D\n");
		}else {
			printf("F\n");
		}
	}else{
		if(score>=85){
			printf("A");
		}else if(score >= 75){
			printf("B\n");
		}else if(score >= 68){
			printf("C\n");
			printf("You need Point: %d",75-score);
		}
	}
	

return 0;
}
