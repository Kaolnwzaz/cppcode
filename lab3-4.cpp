#include <stdio.h>
#include <string.h>
void abc(void);
void square(int W, int L);
float circle(int r);

main(){
	st:
	int r;
	//abc();
	//square(5,20);
	//square(50,100);
	printf("Enter Radius : "); scanf("%d", &r);
	printf("Circle %.3f \n", circle(r));
	printf("-----------------------\n");
	goto st;
}

void abc(void){
	printf("Hello World \n");
}

void square(int W, int L){
	int ANS = W*L;
	printf("ANSWER = %d \n", ANS);
}

float circle(int r){
	float c = 3.14*r*r;
	return c;
}