#include <stdio.h>

main(){
	int base,high;
	float area;
	printf("Enter Base:");
	scanf("%d", &base);
	printf("Enter High:");
	scanf("%d", &high);
	area = 0.5*base*high;
	printf("area is %.2f", area);
}