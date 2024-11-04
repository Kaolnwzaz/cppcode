#include<stdio.h>

main(){
	int i, ans, num;
	printf("Enter Multiplex:");
	scanf("%d", &num);
	
	while (i < 12){
		i++;
		ans = num * i;
		printf("%d * %d = %d\n", num, i, ans);
	}
}