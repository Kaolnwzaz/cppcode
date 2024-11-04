#include<stdio.h>

main(){
	int i, ans, num;
	printf("Enter Multiplex:");
	scanf("%d", &num);
	
	do{
		i++;
		ans = num * i;
		printf("%d * %d = %d\n", num, i, ans);
	}while (i < 12);
}