#include<stdio.h>

main(){
	int a, ans, mul;
	printf("Enter Multiplex:");
	scanf("%d", &mul);
	
	for(a = 1; a <=12 ; a++){
		ans = mul*a;
		printf("%d x %d = %d \n", mul, a, ans);
	}
}