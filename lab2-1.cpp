#include <stdio.h>

main(){
	int score;
	printf("Plase enter your score :");
	scanf("%d" , &score);
	
	if (score >= 80 && score <=100){
		printf("Grade A ");
	}else if (score >=70 && score <=79){
		printf("Grade B ");
	}else if (score >=60 && score <=69){
		printf("Grade C ");
	}else if (score >=50 && score <=59){
		printf("Grade D ");
	}else if (score >=0 && score <=49){
		printf("Grade F ");
	}
}