#include <stdio.h>
#include <string.h>
int allscore(int s,  int j,int m,int f);
void grade (int dum3);

int main(void)
{
	int s, j, m, f;
	int ptr;
	printf("Enter your score : 50/");
	scanf("%d", &s);
	printf("Enter your jitpisai : 10/");
	scanf("%d", &j);
	printf("Enter your midterm : 20/");
	scanf("%d", &m);
	printf("Enter your final : 20/");
	scanf("%d", &f);
	printf("Your score is : %d\n", allscore(s,j,m,f));
	grade(allscore(s,j,m,f));
}

int allscore(int s,  int j,int m,int f){
	int all = s+j+m+f;
	return(all);
}
	
void grade (int score){

	if (score >= 80 && score ==100){
			printf("Grade A ");
		}else if (score >=70 && score <=79){
			printf("Grade B ");
		}else if (score >=60 && score <=69){
			printf("Grade C ");
		}else if (score >=50 && score <=59){
			printf("Grade D ");
		}else if (score >=0 && score <=49){
			printf("Grade F ");
		}else if (score >100){
			printf("you cheating");
		}
}